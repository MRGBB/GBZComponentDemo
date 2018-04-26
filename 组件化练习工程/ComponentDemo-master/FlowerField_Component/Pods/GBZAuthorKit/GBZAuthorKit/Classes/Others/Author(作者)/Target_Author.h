//
//  Target_Author.h
//  AFNetworking
//
//  Created by admin on 2018/4/25.
//

#import <Foundation/Foundation.h>
#import "GBZAuthorKit.h"
@interface Target_Author : NSObject
/// FFAuthorDetailViewController控制器

- (UIViewController*)Action_authorDetailViewController:(NSDictionary*)params;

///返回转化好的Reformer对象

- (NSDictionary*)Action_authorReformerWithOriginData:(NSDictionary*)params;

/// Reformer对象

- (NSDictionary *)Action_authorReformer:(NSDictionary*)params;

/// Request对象

- (APIRequest*)Action_authorAPIRequest:(NSDictionary*)params;


@end
