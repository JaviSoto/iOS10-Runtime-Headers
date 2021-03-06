/* Generated by RuntimeBrowser.
 */

@protocol HDUtilityServerInterface <NSObject>

@required

- (void)remote_createBluetoothSourceWithBundleIdentifier:(void *)arg1 name:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_createFakeAppleSourceWithBundleIdentifier:(void *)arg1 name:(void *)arg2 productType:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_dropEntitlement:(NSString *)arg1;
- (void)remote_fetchAllDevicesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchDiagnosticsWithKeys:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_generateFakeDataForActivityType:(void *)arg1 minutes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 12: long long, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)remote_resetAWDTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_restoreEntitlement:(NSString *)arg1;
- (void)remote_runAWDTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveDataObjects:(void *)arg1 sourceBundleIdentifier:(void *)arg2 sourceVersion:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_select:(void *)arg1 from:(void *)arg2 where:(void *)arg3 groupBy:(void *)arg4 orderBy:(void *)arg5 limit:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 15: NSArray *, NSString *, NSPredicate *, NSArray *, NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, NSError *, void*
- (void)remote_setShouldIgnoreUnlockedState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startFakingDataWithActivityType:(void *)arg1 speed:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, HKQuantity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_stopFakingDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
