//
//  JSQMessagesFramework.h
//  JSQMessagesFramework
//
//  Created by Everton Cunha on 27/03/2018.
//  Copyright © 2018 Hexed Bits. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for JSQMessagesFramework.
FOUNDATION_EXPORT double JSQMessagesFrameworkVersionNumber;

//! Project version string for JSQMessagesFramework.
FOUNDATION_EXPORT const unsigned char JSQMessagesFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JSQMessagesFramework/PublicHeader.h>



#import "JSQMessagesViewController.h"

//  Views
#import "JSQMessagesCollectionView.h"
#import "JSQMessagesCollectionViewCellIncoming.h"
#import "JSQMessagesCollectionViewCellOutgoing.h"
#import "JSQMessagesTypingIndicatorFooterView.h"
#import "JSQMessagesLoadEarlierHeaderView.h"

//  Layout
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "JSQMessagesCollectionViewLayoutAttributes.h"
#import "JSQMessagesCollectionViewFlowLayoutInvalidationContext.h"

//  Toolbar
#import "JSQMessagesComposerTextView.h"
#import "JSQMessagesInputToolbar.h"
#import "JSQMessagesToolbarContentView.h"

//  Model
#import "JSQMessage.h"

#import "JSQMediaItem.h"
#import "JSQPhotoMediaItem.h"
#import "JSQLocationMediaItem.h"
#import "JSQVideoMediaItem.h"

#import "JSQMessagesBubbleImage.h"
#import "JSQMessagesAvatarImage.h"

//  Protocols
#import "JSQMessageData.h"
#import "JSQMessageMediaData.h"
#import "JSQMessageAvatarImageDataSource.h"
#import "JSQMessageBubbleImageDataSource.h"
#import "JSQMessagesCollectionViewDataSource.h"
#import "JSQMessagesCollectionViewDelegateFlowLayout.h"

//  Factories
#import "JSQMessagesAvatarImageFactory.h"
#import "JSQMessagesBubbleImageFactory.h"
#import "JSQMessagesMediaViewBubbleImageMasker.h"
#import "JSQMessagesTimestampFormatter.h"
#import "JSQMessagesToolbarButtonFactory.h"

//  Categories
//#import "JSQSystemSoundPlayer+JSQMessages.h"
#import "NSString+JSQMessages.h"
#import "UIColor+JSQMessages.h"
#import "UIImage+JSQMessages.h"
#import "UIView+JSQMessages.h"

