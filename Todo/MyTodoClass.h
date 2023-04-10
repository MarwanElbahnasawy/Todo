//
//  MyTodoClass.h
//  Todo
//
//  Created by Marwan Elbahnasawy on 08/04/2023.
//

#ifndef MyTodoClass_h
#define MyTodoClass_h

#import <UIKit/UIKit.h>

@interface MyTodoClass : NSObject <NSSecureCoding>

@property NSString *title;
@property NSString *description;
@property NSInteger priority;
@property NSInteger state;
@property NSDate *date;
@property UIImage *image;
@property NSDate *reminderDate;
@property NSString* fileName;

-(instancetype) initWithName: (NSString*) title andDescription: (NSString*) description andPriority: (NSInteger) priority andState: (NSInteger) state andDate: (NSDate*) date andFileName: (NSString*) fileName andReminderDate: (NSDate*) reminderDate;

@end

#endif /* MyTodoClass_h */
