
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
CdrColorTextTooltipDefault,
CdrColorTextButtonPrimary,
CdrColorTextButtonPrimaryHover,
CdrColorTextButtonPrimaryActive,
CdrColorTextButtonPrimaryDisabled,
CdrColorTextButtonSecondary,
CdrColorTextButtonSecondaryHover,
CdrColorTextButtonSecondaryActive,
CdrColorTextButtonSecondaryDisabled,
CdrColorTextButtonDark,
CdrColorTextButtonDarkHover,
CdrColorTextButtonDarkActive,
CdrColorTextButtonDarkDisabled,
CdrColorTextButtonSale,
CdrColorTextButtonSaleHover,
CdrColorTextButtonSaleActive,
CdrColorTextButtonSaleDisabled,
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
CdrColorIconCheckboxDefaultSelected,
CdrColorIconCheckboxDefaultSelectedHover,
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
CdrColorBackgroundTooltipDefault,
CdrColorBackgroundButtonPrimaryRest,
CdrColorBackgroundButtonPrimaryActive,
CdrColorBackgroundButtonPrimaryHover,
CdrColorBackgroundButtonSecondaryRest,
CdrColorBackgroundButtonSecondaryActive,
CdrColorBackgroundButtonSecondaryHover,
CdrColorBackgroundButtonSecondaryDisabled,
CdrColorBackgroundButtonDarkRest,
CdrColorBackgroundButtonDarkActive,
CdrColorBackgroundButtonDarkHover,
CdrColorBackgroundButtonSaleRest,
CdrColorBackgroundButtonSaleActive,
CdrColorBackgroundButtonSaleHover,
CdrColorBackgroundButtonDefaultDisabled,
CdrColorBackgroundButtonIconOnlyActive,
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
CdrColorBorderTooltipDefault,
CdrColorBorderButtonPrimaryRest,
CdrColorBorderButtonPrimaryActive,
CdrColorBorderButtonPrimaryActiveInset,
CdrColorBorderButtonPrimaryHover,
CdrColorBorderButtonSecondaryRest,
CdrColorBorderButtonSecondaryActive,
CdrColorBorderButtonSecondaryActiveInset,
CdrColorBorderButtonSecondaryHover,
CdrColorBorderButtonDarkRest,
CdrColorBorderButtonDarkActive,
CdrColorBorderButtonDarkActiveInset,
CdrColorBorderButtonDarkHover,
CdrColorBorderButtonSaleRest,
CdrColorBorderButtonSaleActive,
CdrColorBorderButtonSaleActiveInset,
CdrColorBorderButtonSaleHover,
CdrColorBorderButtonDefaultDisabled,
CdrColorBorderButtonIconOnlyActive,
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
