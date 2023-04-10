//
//  TodoViewController.h
//  Todo
//
//  Created by Marwan Elbahnasawy on 08/04/2023.
//

#import <UIKit/UIKit.h>
#import "MyProtocol.h"
#import "MyTodoClass.h"

NS_ASSUME_NONNULL_BEGIN

@interface TodoViewController : UIViewController
@property NSMutableArray<MyTodoClass*>* lowPriorityArray;
@property NSMutableArray<MyTodoClass*>* mediumPriorityArray;
@property NSMutableArray<MyTodoClass*>* highPriorityArray;

@property NSMutableArray<MyTodoClass*>* todoArray;
@property NSMutableArray<MyTodoClass*>* inprogressArray;
@property NSMutableArray<MyTodoClass*>* doneArray;

@property NSMutableArray<MyTodoClass*>* todoArrayLowPriority;
@property NSMutableArray<MyTodoClass*>* todoArrayMediumPriority;
@property NSMutableArray<MyTodoClass*>* todoArrayHighPriority;

@property NSUserDefaults *defaults;
@end

NS_ASSUME_NONNULL_END
