/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewVisualState : NSObject <_UIViewModel> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSMutableArray * _mSubviews;
    UIView * _mSuperview;
    id  _stateData;
    UIView * _view;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSMutableArray *mSubviews;
@property (nonatomic) UIView *mSuperview;
@property (nonatomic, retain) id stateData;
@property (nonatomic, readonly) NSArray *subviews;
@property (nonatomic, readonly) _UIViewVisualState *superview;
@property (nonatomic) UIView *view;
@property (nonatomic, readonly) <_UIViewPresentation> *viewPresentation;

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })center;
- (id)copy;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithView:(id)arg1;
- (id)mSubviews;
- (id)mSuperview;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMSubviews:(id)arg1;
- (void)setMSuperview:(id)arg1;
- (void)setStateData:(id)arg1;
- (void)setView:(id)arg1;
- (id)stateData;
- (id)subviews;
- (id)superview;
- (id)view;
- (id)viewPresentation;

@end
