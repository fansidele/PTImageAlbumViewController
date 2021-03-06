//
// Copyright (C) 2012 Ali Servet Donmez. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

@protocol PTImageAlbumViewDataSource;

@interface PTImageAlbumView : NIPhotoAlbumScrollView

@property (nonatomic, assign) id<PTImageAlbumViewDataSource> imageAlbumDataSource;

- (NSInteger)numberOfImages;

- (CGSize)sizeForImageAtIndex:(NSInteger)index;

- (UIImage *)imageAtIndex:(NSInteger)index;
- (UIImage *)thumbnailImageAtIndex:(NSInteger)index;

- (NSString *)sourceForImageAtIndex:(NSInteger)index;
- (NSString *)sourceForThumbnailImageAtIndex:(NSInteger)index;

- (void)reloadData;

@end
