#import <Foundation/Foundation.h>
#import "Waterings.h"

@interface DataSender : NSObject
{
    NSURLConnection *_connection;
}

- (void) sendDeferralDate:(NSDate*)date;
- (void) clearDeferralDate;
- (void) runWateringNow:(Watering*)watering;
- (void) deleteWatering:(Watering*)watering;
- (void) updateWatering:(Watering*)watering;
- (void) sendZoneNames:(NSDictionary*)names;
- (void) runZoneNow:(NSInteger)zone forMinutes:(NSInteger)minutes;

@end
