//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2014 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

/**
 *  A `JSQMessagesCollectionViewLayoutAttributes` is an object that manages the layout-related attributes
 *  for a given `JSQMessagesCollectionViewCell` in a `JSQMessagesCollectionView`.
 */
@interface JSQMessagesCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>

/**
 *  The font used to display the body of a text message in a message bubble within a `JSQMessagesCollectionViewCell`.
 */
@property (strong, nonatomic) UIFont *messageBubbleFont;

/**
 *  The horizontal spacing between the message bubble and the edge of the collection view cell in which it is displayed.
 *
 *  @discussion For *outgoing* messages, this value specifies the amount of spacing from the left most edge of the collection view cell to the left most edge of a message bubble with in the cell.
 *  For *incoming* messages, this value specifies the amount of spacing from the right most edge of the collection view cell to the right most edge of a message bubble with in the cell.
 */
@property (assign, nonatomic) CGFloat messageBubbleLeftRightMargin;

/**
 *  The inset of the text container's layout area within the text view's content area in a `JSQMessagesCollectionViewCell`. 
 *  The specified inset values should be positive.
 */
@property (assign, nonatomic) UIEdgeInsets textViewTextContainerInsets;

/**
 *  The inset of the frame of the text view within a `JSQMessagesCollectionViewCell`. 
 *  The inset values should be positive and are applied in the following ways:
 *
 *  1. The right value insets the text view frame on the side adjacent to the avatar image (or where the avatar would normally appear). For outgoing messages this is the right side, for incoming messages this is the left side.
 *  2. The left value insets the text view frame on the side opposite the avatar image (or where the avatar would normally appear). For outgoing messages this is the left side, for incoming messages this is the right side.
 *  3. The top value insets the top of the frame
 *  4. The bottom value insets the bottom of the frame.
 */
@property (assign, nonatomic) UIEdgeInsets textViewFrameInsets;

/**
 *  The size of the avatar image view of a `JSQMessagesCollectionViewCellIncoming`.
 *
 *  @see `JSQMessagesCollectionViewCellIncoming`.
 */
@property (assign, nonatomic) CGSize incomingAvatarViewSize;

/**
 *  The size of the avatar image view of a `JSQMessagesCollectionViewCellOutgoing`.
 *
 *  @see `JSQMessagesCollectionViewCellOutgoing`.
 */
@property (assign, nonatomic) CGSize outgoingAvatarViewSize;

/**
 *  The height of the cellTopLabel of a `JSQMessagesCollectionViewCell`.
 *
 *  @see `JSQMessagesCollectionViewCell`.
 */
@property (assign, nonatomic) CGFloat cellTopLabelHeight;

/**
 *  The height of the messageBubbleTopLabel of a `JSQMessagesCollectionViewCell`.
 *
 *  @see `JSQMessagesCollectionViewCell`.
 */
@property (assign, nonatomic) CGFloat messageBubbleTopLabelHeight;

/**
 *  The height of the cellBottomLabel of a `JSQMessagesCollectionViewCell`.
 *
 *  @see `JSQMessagesCollectionViewCell`.
 */
@property (assign, nonatomic) CGFloat cellBottomLabelHeight;

@end