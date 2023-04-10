//
//  TodoItemViewController.h
//  Todo
//
//  Created by Marwan Elbahnasawy on 08/04/2023.
//

#import <UIKit/UIKit.h>
#import "MyProtocol.h"
#import "ViewController.h"
#import "MyTodoClass.h"

NS_ASSUME_NONNULL_BEGIN

@interface TodoItemViewController : UIViewController


@property id<MyProtocol> refToFirstScreen;
@property MyTodoClass *editedTodoItem;
@property BOOL isEditing;
@property NSInteger indexPathSection;
@property NSInteger indexPathRow;
@property NSInteger priortyBefore;
@property NSInteger stateBefore;

@end

NS_ASSUME_NONNULL_END
