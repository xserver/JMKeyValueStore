//
//  JMKeyValueStore.h
//  JMKeyValueStore
//
//  Created by TangQiao, xserver on 15/4/9.
//  Copyright (c) 2015年 pitaya. All rights reserved.
//

#import <Foundation/Foundation.h>

//  Help you store anything string data to sqlite.
//  value = [NSArray, NSDictionary, NSString, NSNumber]
@interface JMKeyValueStore : NSObject

@property (nonatomic, copy) NSString *defaultTableName; //  default = nil

//  init & close
- (id)initWithDatabasePath:(NSString *)dbPath;
- (void)createTableWithName:(NSString *)tableName;
- (void)clearTableWithName:(NSString *)tableName;
- (void)close;


//  use custom table
- (void)putValue:(id)value forKey:(NSString *)key intoTable:(NSString *)tableName;
- (id)valueForKey:(NSString *)key fromTable:(NSString *)tableName;


//  use default table
- (void)putValue:(id)value forKey:(NSString *)key;
- (id)valueForKey:(NSString *)key;

//  clear
- (void)removeValueForKey:(NSString *)key fromTable:(NSString *)tableName;
- (void)removeValuesForKeys:(NSArray *)keys fromTable:(NSString *)tableName;

//  模糊前缀删除, SQL = delete + like prefix%%
- (void)removeValuesByKeyPrefix:(NSString *)keyPrefix fromTable:(NSString *)tableName;


@end
