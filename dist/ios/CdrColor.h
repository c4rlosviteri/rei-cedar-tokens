
//
// CdrColor.h
//
// Do not edit directly
// Generated on Fri, 15 Feb 2019 21:54:07 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, CdrColorName) {
CdrColorTextPrimaryLightmode,
CdrColorTextPrimaryDarkmode,
CdrColorTextSecondaryLightmode,
CdrColorTextSecondaryDarkmode,
CdrColorTextDisabledLightmode,
CdrColorTextDisabledDarkmode,
CdrColorTextLinkLightmode,
CdrColorTextLinkDarkmode,
CdrColorTextErrorLightmode,
CdrColorTextErrorDarkmode,
CdrColorTextFormLabelLightmode,
CdrColorTextFormLabelDarkmode,
CdrColorTextFormPlaceholderLightmode,
CdrColorTextFormPlaceholderDarkmode,
CdrColorTextFormDisabledLightmode,
CdrColorTextFormDisabledDarkmode,
CdrColorBackgroundDark,
CdrColorBackgroundDarker,
CdrColorBackgroundLight,
CdrColorBackgroundLighter,
CdrColorBackgroundLightest,
CdrColorBackgroundFormLightmode,
CdrColorBackgroundFormDarkmode,
CdrColorBackgroundFormInputLightmode,
CdrColorBackgroundFormInputDarkmode,
CdrColorBorderPrimaryLightmode,
CdrColorBorderPrimaryDarkmode,
CdrColorBorderSecondaryLightmode,
CdrColorBorderSecondaryDarkmode,
CdrColorBorderDisabledLightmode,
CdrColorBorderDisabledDarkmode,
CdrColorBorderErrorLightmode,
CdrColorBorderSelectedLightmode,
CdrProminenceFlatColor,
CdrProminenceRaisedColor,
CdrProminenceElevatedColor,
CdrProminenceFloatingColor,
CdrProminenceLiftedColor
};

@interface CdrColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(CdrColorName)color;
@end
