/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSVerificationStateResetOperation : VSAsyncOperation {
    VSStoreURLBag * _bag;
    NSURLSessionTask * _resetStateTask;
    VSFailable * _result;
}

@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, retain) NSURLSessionTask *resetStateTask;
@property (nonatomic, retain) VSFailable *result;

- (void).cxx_destruct;
- (void)_resetVerificationStateWithURL:(id)arg1;
- (id)bag;
- (void)cancel;
- (void)executionDidBegin;
- (id)resetStateTask;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setResetStateTask:(id)arg1;
- (void)setResult:(id)arg1;

@end
