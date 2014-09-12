/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAGKSpeakableAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * parameters;
@property(copy) NSString * templateName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speakableAnswer;

- (void)setTemplateName:(id)arg1;
- (id)templateName;
- (id)encodedClassName;
- (void)setParameters:(id)arg1;
- (id)parameters;
- (id)groupIdentifier;

@end