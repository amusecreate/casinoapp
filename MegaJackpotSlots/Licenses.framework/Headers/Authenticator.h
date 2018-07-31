//
//  Authenticator.h
//  Licenses
//
//  Created by Orban Balazs on 2016. 10. 25..
//  Copyright © 2016. Orban Balazs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Authenticator : NSObject
+(void)Test;
-(void)Testv;
-(void) authenticateWithLicense:(NSString*)license forDefaults:(NSUserDefaults*)defaults aFBShareLink:(NSString*)aFBShareLinkGet aFBShareText: (NSString*)aFBShareText FeebBackEmail: (NSString*)aFeedbackEmail aFeedbackSubject:(NSString*)aFeedbackSubject aLevReq1:(NSString*)alevReq1 aLevReq2:(NSString*)alevreq2 aLevReq3:(NSString*)aLevReq3 aLevReq4:(NSString*)alevreq4 aLevReq5:(NSString*)aLevReq5 aBundleID:(NSString*)aBundleID aTwitterShareText:(NSString*)aTwitterShareText aTwitterShareLink:(NSString*)aTwitterShateLink;
+ (Authenticator*)sharedManager;
-(BOOL)haveBeenLaunchedWithDefaults:(NSUserDefaults*)defaults;
-(void)setValuesLaunch;
-(void)setValuesLaunch;
-(BOOL)checkAuth;
-(int)i;
-(int)Maxi;
@end
