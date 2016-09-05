//
//  Home.h
//  Lab04
//
//  Created by Jose Rodriguez on 22/06/16.
//  Copyright © 2016 Jose. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cellTeams.h"

@interface Home : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *tblTeams;
@property (strong, nonatomic) IBOutlet UILabel *tblTeam;

@end
