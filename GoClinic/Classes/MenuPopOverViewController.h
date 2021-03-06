//
//  MenuPopOverViewController.h
//  GoClinic
//
//  Created by 猪子 徹 on 10/10/12.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define MENU_POP_OVER_VIEW_CONTROLLER_TAG 400 ///< ViewControllerを識別するためのタグ

@protocol MenuPopOverViewControllerDelegate
/**
メニューのアイテムを押下した時に呼び出されるメソッド
*/
-(void)touchMenuItem:(id)menuItem menuId:(int)menuId;
@end

/**
 メニュー表示用のPopOverViewController
 @auther inoko
 */
@interface MenuPopOverViewController : UITableViewController {
	id<MenuPopOverViewControllerDelegate> _delegate; ///< プロパティ受け渡し用変数
	NSMutableArray* _menuList; ///< メニューのリストを格納する配列
}

@property(nonatomic, assign) id<MenuPopOverViewControllerDelegate> delegate; ///< デリゲートオブジェクト

/**
 コンストラクタ
 @param nibNameOrNil nibファイル名
 @param nibBundleOrNil バンドル名
 @param menuList メニューに表示する文字列配列
 @param MenuPopOverViewControllerオブジェクト
 */
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil menuList:(NSMutableArray*)menuList;
@end


