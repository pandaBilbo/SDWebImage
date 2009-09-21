/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

@interface SDWebImageDownloader : NSOperation
{
    NSURL *url;
    id target;
    SEL action;
}

@property (retain) NSURL *url;
@property (assign) id target;
@property (assign) SEL action;

+ (id)downloaderWithURL:(NSURL *)url target:(id)target action:(SEL)action;
+ (void)setMaxConcurrentDownloads:(NSUInteger)max;

@end