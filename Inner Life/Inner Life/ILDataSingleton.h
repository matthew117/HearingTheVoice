//
//  ILDataSingleton.h
//  Inner Life
//
//  Created by Matthew Bates on 15/06/2013.
//  Copyright (c) 2013 Matthew Bates. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ILQuestionXMLParserDelegate.h"
#import "ILScheduleXMLParserDelegate.h"

@interface ILDataSingleton : NSObject
{
    @private
    NSArray *sections;
    ILSchedule *schedule;
}

@property NSInteger currentQuestion;
@property NSInteger currentSection;

@property NSMutableDictionary *responses;

+ (ILDataSingleton *)instance;

// Return an array of sections
- (NSArray *)getQuestionsInSections;
- (NSArray *)getQuestionsInSectionsFilteredBySession: (NSInteger)sessionID;
- (NSArray *)getQuestionsBySection: (NSInteger)sectionID;
- (NSArray *)getFlatQuestionArrayBySession: (NSInteger)sessionID;
// Return a schedule object either from the cache or by accessing the web API
- (ILSchedule *)getSchedule;

@end
