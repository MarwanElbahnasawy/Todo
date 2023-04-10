//
//  MyProtocol.h
//  Todo
//
//  Created by Marwan Elbahnasawy on 08/04/2023.
//

#ifndef MyProtocol_h
#define MyProtocol_h

#import "MyTodoClass.h"

@protocol MyProtocol <NSObject>

-(void) didCreateNewItem : (MyTodoClass*) newItem ;
-(void) didEditItem : (MyTodoClass*) newItem andSection: (NSInteger) section andIndex: (NSInteger) index andPriorityBefore: (NSInteger) priorityBefore andPriorityAfter: (NSInteger) priorityAfter ;

@end

#endif /* MyProtocol_h */
