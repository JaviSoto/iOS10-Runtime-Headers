/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILockupSwooshViewController, SKUIItemArtworkContext;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader  {
    SKUIItemArtworkContext *_context;
}

@property(readonly) SKUILockupSwooshViewController * swooshViewController;


- (id)cachedImageForItem:(id)arg1;
- (BOOL)loadImageForItem:(id)arg1 reason:(int)arg2;
- (void)loadImagesForNextPageWithReason:(int)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (id)placeholderImageForItem:(id)arg1;
- (void).cxx_destruct;

@end