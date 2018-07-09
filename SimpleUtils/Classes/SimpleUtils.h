@interface SimpleUtils : NSObject {
    
}

+(void)setDefaultCountryCode:(NSString *)countryCode onObject:(id)anObject;

@end

@implementation SimpleUtils

+(void)setDefaultCountryCode:(NSString *)countryCode onObject:(id)anObject {
    if ([anObject respondsToSelector:NSSelectorFromString(@"setDefaultCountryCode:")]) {
        [anObject performSelector:NSSelectorFromString(@"setDefaultCountryCode:") withObject:countryCode];
    }
}

@end
