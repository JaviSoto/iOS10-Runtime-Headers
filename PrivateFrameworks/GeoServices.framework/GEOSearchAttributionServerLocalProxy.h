/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {
    GEOSearchAttributionManifest * _attributionManifest;
    NSLock * _attributionManifestLock;
    NSMapTable * _listeners;
    NSLock * _listenersLock;
    NSMutableArray * _updateManifestCompletionHandlers;
    NSMutableArray * _updateManifestErrorHandlers;
    bool  _updatingManifest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_attributionManifest;
- (void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(bool)arg2;
- (void)_pruneOldAttributionLogos;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 updatedManifest:(bool)arg2 toListener:(id)arg3;
- (void)_updateManifestWithCompletionHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;

@end
