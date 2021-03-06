//
//  GameRecordStack.h
//  GoClinic
//
//  Created by 猪子 徹 on 10/12/04.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 棋譜の順序を保存するためのStackクラス
 @auther inoko
 */
@interface NSMutableArray (StackAdditions)

/**
 pop操作
 @return NSObject
 */
- (id)pop;

/**
 push操作
 @param obj pushするNSObject
 */
- (void)push:(id)obj;

@end
