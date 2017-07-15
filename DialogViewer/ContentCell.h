//
//  ContentCell.h
//  DialogViewer
//
//  Created by Vasilii on 15.07.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContentCell : UICollectionViewCell

@property (strong, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (CGSize)sizeForContentString:(NSString *)s;

@end
