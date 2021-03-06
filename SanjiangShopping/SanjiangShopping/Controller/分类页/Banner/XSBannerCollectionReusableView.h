//
//  XSBannerCollectionReusableView.h
//  SanjiangShopping
//
//  Created by 薛纪杰 on 15/9/2.
//  Copyright (c) 2015年 薛纪杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CollectionDataModel;

@interface XSBannerCollectionReusableView : UICollectionReusableView
@property (weak, nonatomic) IBOutlet UIImageView *picture;

- (void)configureForCollectionData:(CollectionDataModel *)data;

@end
