//
//  MTManualTiVoEditor.h
//  cTiVo
//
//  Created by Scott Buchanan on 1/25/13.
//  Copyright (c) 2013 Scott Buchanan. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MTTabViewItem.h"

@interface MTManualTiVoEditorController : NSViewController <MTTabViewItemControllerDelegate> {
	IBOutlet NSArrayController *manualTiVoArrayController, *networkTiVoArrayController;
}


@end
