
//
// CdrColor.h
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CdrColorName) {
CdrThemeColorTextPrimary,
CdrThemeColorTextSecondary,
CdrThemeColorBackgroundPrimary,
CdrThemeColorBackgroundSecondary,
CdrThemeColorBorderPrimary,
CdrThemeColorBorderSecondary,
CdrKnockoutColorTextPrimary,
CdrKnockoutColorTextSecondary,
CdrKnockoutColorBackgroundPrimary,
CdrKnockoutColorBorderInversePrimary,
CdrKnockoutColorBorderInverseSecondary,
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
CdrColorTextChipDefault,
CdrColorTextChipDisabled,
CdrColorTextPrimary,
CdrColorTextSecondary,
CdrColorTextEmphasis,
CdrColorTextBrand,
CdrColorTextSale,
CdrColorTextInverse,
CdrColorTextDisabled,
CdrColorTextSuccess,
CdrColorTextWarning,
CdrColorTextError,
CdrColorTextInfo,
CdrColorTextMessageError,
CdrColorTextInputDefault,
CdrColorTextInputLabel,
CdrColorTextInputLabelDisabled,
CdrColorTextInputPlaceholder,
CdrColorTextInputRequired,
CdrColorTextInputOptional,
CdrColorTextInputDisabled,
CdrColorTextInputFilled,
CdrColorTextInputHelp,
CdrColorTextInputError,
CdrColorTextLinkRest,
CdrColorTextLinkHover,
CdrColorTextLinkActive,
CdrColorTextLinkDisabled,
CdrColorTextLinkVisited,
CdrColorTextRatingDefault,
CdrColorTextRatingHover,
CdrColorTextRatingSeparator,
CdrColorTextTabRest,
CdrColorTextTabActive,
CdrColorTextTabHover,
CdrColorTextTabDisabled,
CdrColorTextToggleButtonDefaultRest,
CdrColorTextTooltipDefault,
CdrColorBackgroundButtonPrimaryRest,
CdrColorBackgroundButtonPrimaryActive,
CdrColorBackgroundButtonPrimaryHover,
CdrColorBackgroundButtonPrimaryIconAltHover,
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
CdrColorBackgroundChipDefaultRest,
CdrColorBackgroundChipDefaultDisabled,
CdrColorBackgroundChipDefaultHover,
CdrColorBackgroundChipDefaultFocus,
CdrColorBackgroundChipDefaultActive,
CdrColorBackgroundChipDefaultSelected,
CdrColorBackgroundChipDefaultSelectedHover,
CdrColorBackgroundChipDefaultSelectedFocus,
CdrColorBackgroundPrimary,
CdrColorBackgroundSecondary,
CdrColorBackgroundBrandSpruce,
CdrColorBackgroundMessageDefault01,
CdrColorBackgroundMessageDefault02,
CdrColorBackgroundMessageSuccess,
CdrColorBackgroundMessageSuccess01,
CdrColorBackgroundMessageSuccess02,
CdrColorBackgroundMessageWarning,
CdrColorBackgroundMessageWarning01,
CdrColorBackgroundMessageWarning02,
CdrColorBackgroundMessageError,
CdrColorBackgroundMessageError01,
CdrColorBackgroundMessageError02,
CdrColorBackgroundMessageInfo,
CdrColorBackgroundMessageInfo01,
CdrColorBackgroundMessageInfo02,
CdrColorBackgroundMessageSale,
CdrColorBackgroundAccordionHover,
CdrColorBackgroundPaginationHover,
CdrColorBackgroundPaginationKeyline,
CdrColorBackgroundModalOverlay,
CdrColorBackgroundLabelDefaultHover,
CdrColorBackgroundLabelDefaultActive,
CdrColorBackgroundLabelDefaultFocus,
CdrColorBackgroundLabelSecondaryHover,
CdrColorBackgroundLabelSecondaryActive,
CdrColorBackgroundLabelSecondaryFocus,
CdrColorBackgroundInputDefault,
CdrColorBackgroundInputSecondary,
CdrColorBackgroundInputError,
CdrColorBackgroundInputDefaultHover,
CdrColorBackgroundInputDefaultActive,
CdrColorBackgroundInputDefaultSelected,
CdrColorBackgroundInputSecondaryActive,
CdrColorBackgroundInputDefaultSelectedHover,
CdrColorBackgroundInputDefaultDisabled,
CdrColorBackgroundInputDefaultSelectedFocus,
CdrColorBackgroundInputDefaultFocus,
CdrColorBackgroundRatingStarDefault,
CdrColorBackgroundRatingStarHighlighted,
CdrColorBackgroundSwitchDefaultRest,
CdrColorBackgroundSwitchDefaultHover,
CdrColorBackgroundSwitchDefaultFocus,
CdrColorBackgroundSwitchSelectedDefaultRest,
CdrColorBackgroundSwitchSelectedDefaultHover,
CdrColorBackgroundSwitchSelectedDefaultFocus,
CdrColorBackgroundSwitchHandleDefaultRest,
CdrColorBackgroundSwitchHandleDefaultHover,
CdrColorBackgroundSwitchHandleDefaultFocus,
CdrColorBackgroundSwitchHandleSelectedDefaultRest,
CdrColorBackgroundSwitchHandleSelectedDefaultHover,
CdrColorBackgroundSwitchHandleSelectedDefaultFocus,
CdrColorBackgroundTableHeader,
CdrColorBackgroundTableRow,
CdrColorBackgroundTableRowAlt,
CdrColorBackgroundToggleGroupDefaultRest,
CdrColorBackgroundToggleButtonDefaultRest,
CdrColorBackgroundToggleButtonDefaultHover,
CdrColorBackgroundToggleButtonDefaultFocus,
CdrColorBackgroundToggleButtonDefaultSelectedRest,
CdrColorBackgroundToggleButtonDefaultSelectedHover,
CdrColorBackgroundTooltipDefault,
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
CdrColorBorderChipDefaultRest,
CdrColorBorderChipDefaultDisabled,
CdrColorBorderChipDefaultHover,
CdrColorBorderChipDefaultFocus,
CdrColorBorderChipDefaultActive,
CdrColorBorderChipDefaultSelectedRest,
CdrColorBorderChipDefaultSelectedHover,
CdrColorBorderChipDefaultSelectedFocus,
CdrColorBorderPrimary,
CdrColorBorderSecondary,
CdrColorBorderSuccess,
CdrColorBorderWarning,
CdrColorBorderError,
CdrColorBorderInfo,
CdrColorBorderMessageDefault01,
CdrColorBorderMessageDefault02,
CdrColorBorderMessageSuccess01,
CdrColorBorderMessageSuccess02,
CdrColorBorderMessageWarning01,
CdrColorBorderMessageWarning02,
CdrColorBorderMessageError01,
CdrColorBorderMessageError02,
CdrColorBorderMessageInfo01,
CdrColorBorderMessageInfo02,
CdrColorBorderLabelDefaultFocus,
CdrColorBorderInputDefault,
CdrColorBorderInputError,
CdrColorBorderInputDefaultActive,
CdrColorBorderInputDefaultSelected,
CdrColorBorderInputDefaultFocus,
CdrColorBorderInputDefaultSelectedHover,
CdrColorBorderInputDefaultHover,
CdrColorBorderInputDefaultDisabled,
CdrColorBorderLinkRest,
CdrColorBorderLinkHover,
CdrColorBorderLinkActive,
CdrColorBorderLinkDisabled,
CdrColorBorderLinkVisited,
CdrColorBorderRatingStarDefault,
CdrColorBorderRatingStarHighlighted,
CdrColorBorderSwitchDefaultHover,
CdrColorBorderSwitchHandleDefaultRest,
CdrColorBorderSwitchHandleDefaultHover,
CdrColorBorderSwitchHandleDefaultFocus,
CdrColorBorderTabKeylineRest,
CdrColorBorderTabKeylineActive,
CdrColorBorderTabKeylineActiveAlt,
CdrColorBorderTabKeylineHover,
CdrColorBorderTabKeylineHoverAlt,
CdrColorBorderTabKeylineDisabled,
CdrColorBorderTableDefault,
CdrColorBorderTableHead,
CdrColorBorderToggleButtonDefaultFocus,
CdrColorBorderToggleButtonDefaultSelectedRest,
CdrColorBorderToggleButtonDefaultSelectedFocus,
CdrColorBorderTooltipDefault,
CdrColorIconDefault,
CdrColorIconEmphasis,
CdrColorIconLink,
CdrColorIconDisabled,
CdrColorIconMessageDefault,
CdrColorIconMessageSuccess,
CdrColorIconMessageWarning,
CdrColorIconMessageError,
CdrColorIconMessageInfo,
CdrColorIconCheckboxDefaultSelected,
CdrColorIconCheckboxDefaultSelectedHover,
CdrColorIconCheckboxDefaultSelectedActive,
CdrColorIconSwitchSelectedDefaultRest,
CdrColorIconSwitchSelectedDefaultHover,
CdrColorIconSwitchSelectedDefaultFocus,
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
