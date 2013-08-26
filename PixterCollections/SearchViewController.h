//
//  SearchViewController.h
//  PixterCollections
//
//  Created by Nimish Manjarekar on 8/25/13.
//  Copyright (c) 2013 nimishm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchDisplayDelegate, UISearchBarDelegate>
@property (strong, nonatomic) IBOutlet UISearchBar *searchBar;
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;

@end
