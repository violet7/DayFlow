#import <UIKit/UIKit.h>
#import "DFSupplementaryViewsDatasource.h"

@class DFDatePickerView;

@protocol DFDatePickerViewDataSource <NSObject>
- (BOOL) datePickerView:(DFDatePickerView *)datePickerView shouldShowActivityOnDate:(NSDate *)date;
@end

@interface DFDatePickerView : UIView
@property (nonatomic) NSDate *selectedDate;
@property (nonatomic) UIColor *monthHeaderColor;
@property (nonatomic) UIFont *monthHeaderFont;
@property (nonatomic) NSObject<DFSupplementaryViewsDatasource> *supplementaryDatasource;
@property (nonatomic, weak) id <DFDatePickerViewDataSource> dataSource;

- (instancetype) initWithCalendar:(NSCalendar *)calendar;

- (void)scrollToDate:(NSDate *)date
      atScollPostion:(UICollectionViewScrollPosition)scrollPosition
            animated:(BOOL)animated;


- (void)clearSelectionAnimated:(BOOL)animated;

@end
