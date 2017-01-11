//
//  binnode_zag.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_zag_h
#define binnode_zag_h

template <typename T> BinNodePosi(T) BinNode<T>::zag() { //逆时针旋转
    BinNodePosi(T) rChild = rc;
    rChild->parent = this->parent;
    if ( rChild->parent )
        ( ( this == rChild->parent->lc ) ? rChild->parent->lc : rChild->parent->rc ) = rChild;
    rc = rChild->lc; if ( rc ) rc->parent = this;
    rChild->lc = this; this->parent = rChild;
    return rChild;
}

#endif /* binnode_zag_h */
