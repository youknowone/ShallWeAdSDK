#import <UIKit/UIKit.h>

#define G_SHALLWEAD [ShallWeAD singleton]
enum {degree0 = 0 , degree90 = 90 , degree180 = 180, degree270 = 270};

@class JMM_View;

@protocol ShallWeAdDelegate<NSObject>;
@optional
-(void)loadingError;
-(void)loadingSuccess;
@end

@interface ShallWeAD : UIViewController{
}

+(id) alloc;
+(ShallWeAD*)singleton;
-(void) stopBanner;
-(void) startBanner;
-(void) Create_ShallWeAD:(NSString*) _App_Key
              TypeBanner:(NSString*) _Type_Banner
                 GpsInfo:(BOOL)_Gps_Info
             BannerWidth:(NSString*)_Banner_Width
                    PoSX:(float)_Pos_X
                    PoSY:(float)_Pos_Y
                SetAngle:(int)_Angle
                SetDebug:(BOOL)_Debug;
-(void) setBannerPoSX:(float)_Pos_X
                 PoSY:(float)_Pos_Y
             SetAngle:(int)_Angle;

@property (retain, nonatomic) JMM_View *jmm_view; 
@property (nonatomic, assign) id<ShallWeAdDelegate> delegate;
@property bool isNetWorkAlive;

@end
