
//
// CdrColor.h
//

//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, CdrColorName) {
CdrColorTextPrimary,
CdrColorTextSecondary,
CdrColorTextBrand,
CdrColorTextSale,
CdrColorTextInverse,
CdrColorTextDisabled,
CdrColorTextSuccess,
CdrColorTextWarning,
CdrColorTextError,
CdrColorTextInfo,
CdrColorTextInputDefault,
CdrColorTextInputLabel,
CdrColorTextInputPlaceholder,
CdrColorTextInputRequired,
CdrColorTextInputDisabled,
CdrColorTextInputFilled,
CdrColorTextInputHelp,
CdrColorTextLinkRest,
CdrColorTextLinkHover,
CdrColorTextLinkActive,
CdrColorTextLinkDisabled,
CdrColorTextLinkVisited,
CdrColorTextButtonPrimary,
CdrColorTextButtonPrimaryHover,
CdrColorTextButtonPrimaryActive,
CdrColorTextButtonPrimaryDisabled,
CdrColorTextButtonSecondary,
CdrColorTextButtonSecondaryHover,
CdrColorTextButtonSecondaryActive,
CdrColorTextButtonSecondaryDisabled,
CdrColorTextCtaDark,
CdrColorTextCtaDarkHover,
CdrColorTextCtaDarkActive,
CdrColorTextCtaDarkDisabled,
CdrColorTextCtaLight,
CdrColorTextCtaLightHover,
CdrColorTextCtaLightActive,
CdrColorTextCtaLightDisabled,
CdrColorTextCtaBrand,
CdrColorTextCtaBrandHover,
CdrColorTextCtaBrandActive,
CdrColorTextCtaBrandDisabled,
CdrColorTextCtaSale,
CdrColorTextCtaSaleHover,
CdrColorTextCtaSaleActive,
CdrColorTextCtaSaleDisabled,
CdrColorTextTabRest,
CdrColorTextTabActive,
CdrColorTextTabHover,
CdrColorTextTabDisabled,
CdrColorTextRatingDefault,
CdrColorTextRatingHover,
CdrColorTextRatingSeparator,
CdrColorIconDefault,
CdrColorIconEmphasis,
CdrColorIconLink,
CdrColorIconDisabled,
CdrColorBackgroundPrimary,
CdrColorBackgroundSecondary,
CdrColorBackgroundSuccess,
CdrColorBackgroundWarning,
CdrColorBackgroundError,
CdrColorBackgroundInfo,
CdrColorBackgroundTableHeader,
CdrColorBackgroundTableRow,
CdrColorBackgroundTableRowAlt,
CdrColorBackgroundInputDefault,
CdrColorBackgroundInputDefaultHover,
CdrColorBackgroundInputDefaultSelected,
CdrColorBackgroundInputDefaultSelectedHover,
CdrColorBackgroundInputDefaultDisabled,
CdrColorBackgroundButtonPrimaryRest,
CdrColorBackgroundButtonPrimaryActive,
CdrColorBackgroundButtonPrimaryHover,
CdrColorBackgroundButtonSecondaryRest,
CdrColorBackgroundButtonSecondaryActive,
CdrColorBackgroundButtonSecondaryHover,
CdrColorBackgroundButtonSecondaryDisabled,
CdrColorBackgroundButtonDefaultDisabled,
CdrColorBackgroundButtonIconOnlyActive,
CdrColorBackgroundCtaDarkRest,
CdrColorBackgroundCtaDarkActive,
CdrColorBackgroundCtaDarkHover,
CdrColorBackgroundCtaLightRest,
CdrColorBackgroundCtaLightActive,
CdrColorBackgroundCtaLightHover,
CdrColorBackgroundCtaLightDisabled,
CdrColorBackgroundCtaSaleRest,
CdrColorBackgroundCtaSaleActive,
CdrColorBackgroundCtaSaleHover,
CdrColorBackgroundCtaBrandRest,
CdrColorBackgroundCtaBrandActive,
CdrColorBackgroundCtaBrandHover,
CdrColorBackgroundCtaDefaultDisabled,
CdrColorBackgroundAccordionHover,
CdrColorBackgroundPaginationHover,
CdrColorBackgroundPaginationKeyline,
CdrColorBackgroundButtonIconAltHover,
CdrColorBackgroundRatingStarDefault,
CdrColorBackgroundRatingStarHighlighted,
CdrColorBackgroundModalOverlay,
CdrColorBorderPrimary,
CdrColorBorderSecondary,
CdrColorBorderSuccess,
CdrColorBorderWarning,
CdrColorBorderError,
CdrColorBorderInfo,
CdrColorBorderInputDefault,
CdrColorBorderInputDefaultActive,
CdrColorBorderInputDefaultSelected,
CdrColorBorderInputDefaultSelectedHover,
CdrColorBorderInputDefaultHover,
CdrColorBorderInputDefaultDisabled,
CdrColorBorderButtonPrimaryRest,
CdrColorBorderButtonPrimaryActive,
CdrColorBorderButtonPrimaryActiveInset,
CdrColorBorderButtonPrimaryHover,
CdrColorBorderButtonSecondaryRest,
CdrColorBorderButtonSecondaryActive,
CdrColorBorderButtonSecondaryActiveInset,
CdrColorBorderButtonSecondaryHover,
CdrColorBorderButtonDefaultDisabled,
CdrColorBorderButtonIconOnlyActive,
CdrColorBorderCtaDarkRest,
CdrColorBorderCtaDarkActive,
CdrColorBorderCtaDarkActiveInset,
CdrColorBorderCtaDarkHover,
CdrColorBorderCtaLightRest,
CdrColorBorderCtaLightActive,
CdrColorBorderCtaLightActiveInset,
CdrColorBorderCtaLightHover,
CdrColorBorderCtaSaleRest,
CdrColorBorderCtaSaleActive,
CdrColorBorderCtaSaleActiveInset,
CdrColorBorderCtaSaleHover,
CdrColorBorderCtaBrandRest,
CdrColorBorderCtaBrandActive,
CdrColorBorderCtaBrandActiveInset,
CdrColorBorderCtaBrandHover,
CdrColorBorderCtaDefaultDisabled,
CdrColorBorderRatingStarDefault,
CdrColorBorderRatingStarHighlighted,
CdrColorBorderLinkRest,
CdrColorBorderLinkHover,
CdrColorBorderLinkActive,
CdrColorBorderLinkDisabled,
CdrColorBorderLinkVisited,
CdrColorBorderTableDefault,
CdrColorBorderTableHead,
CdrColorBorderTabKeylineRest,
CdrColorBorderTabKeylineActive,
CdrColorBorderTabKeylineActiveAlt,
CdrColorBorderTabKeylineHover,
CdrColorBorderTabKeylineHoverAlt,
CdrColorBorderTabKeylineDisabled,
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
CdrColorIconPrimaryLightmode,
CdrColorIconPrimaryDarkmode,
CdrColorIconEmphasisLightmode,
CdrColorIconEmphasisDarkmode,
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
