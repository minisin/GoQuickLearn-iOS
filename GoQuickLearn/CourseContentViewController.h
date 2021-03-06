//
//  CourseContentViewController.h
//  GoQuickLearn
//
//  Created by jemy on 3/16/14.
//  Copyright (c) 2014 多科学堂. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CourseContentViewController : UIViewController
@property NSInteger courseIndex;
@property NSString *courseFilePath;
@property NSString *courseName;
@property (strong,nonatomic)NSArray *courseList;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *nextChapterBtn;

@end
