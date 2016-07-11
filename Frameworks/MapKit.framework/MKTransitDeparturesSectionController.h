/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesSectionController : MKTransitSectionController {
    bool  _departuresAreVehicleSpecific;
    NSString * _direction;
    bool  _needsFindDeparturesAreVehicleSpecific;
    bool  _needsFindRowForServiceGap;
    NSArray * _sequences;
    NSMapTable * _sequencesToInclude;
    NSDictionary * _serviceGapStrings;
}

@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (nonatomic, readonly) bool showOperatingHours;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(bool)arg2;
- (bool)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3;
- (id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2;
- (void)_serviceGapDate:(out id*)arg1 string:(out id*)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4;
- (void)_setNeedsBuildRows;
- (bool)departuresAreVehicleSpecific;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3;
- (id)sequenceForRow:(long long)arg1 outIsNewLine:(out bool*)arg2 outNextLineIsSame:(out bool*)arg3;
- (id)sequences;
- (id)serviceGapDescriptionForRow:(long long)arg1;
- (bool)showOperatingHours;

@end