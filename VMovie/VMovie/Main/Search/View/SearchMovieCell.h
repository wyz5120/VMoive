//
//  SearchMovieCell.h
//  VMovie
//
//  Created by wyz on 16/3/15.
//  Copyright © 2016年 wyz. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Movie;
@interface SearchMovieCell : UITableViewCell
/**Movie模型 */
@property (nonatomic, strong) Movie *movie;
@end
