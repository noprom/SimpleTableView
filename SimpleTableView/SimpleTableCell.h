//
//  SimpleTableCell.h
//  SimpleTableView
//
//  Created by noprom on 15/7/13.
//  Copyright (c) 2015年 noprom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SimpleTableCell : NSObject
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;


@end
