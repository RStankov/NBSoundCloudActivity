//
//  NBSoundCloudActivity.h
//  NBSoundCloudActivity
//
//  Created by Nick Bonatsakis on 10/23/12.
//  Copyright (c) 2012 Atlantia Software. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#import <UIKit/UIKit.h>

typedef void(^NBSoundCloudActivityBlock)(BOOL canceled, NSDictionary* trackInfo, NSError* error);

@interface NBSoundCloudActivity : UIActivity

- (id) initWithClientId:(NSString*)clientId secret:(NSString*)secret redirectURL:(NSURL*)redirectURL;

@property (nonatomic, copy) NBSoundCloudActivityBlock completionBlock;
@property (nonatomic, copy) NSString* foursquareClientId;
@property (nonatomic, copy) NSString* foursquareClientSecret;
@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSArray* tags;
@property (nonatomic, retain) UIImage* coverImage;
@property (nonatomic) BOOL isPrivate;

@end
