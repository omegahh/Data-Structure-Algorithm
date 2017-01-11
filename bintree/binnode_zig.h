//
//  binnode_zig.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_zig_h
#define binnode_zig_h

template <typename T> BinNodePosi(T) BinNode<T>::zig() { //顺时针旋转
    BinNodePosi(T) lChild = lc;
    lChild->parent = this->parent;
    if ( lChild->parent )
        ( ( this == lChild->parent->rc ) ? lChild->parent->rc : lChild->parent->lc ) = lChild;
    lc = lChild->rc; if ( lc ) lc->parent = this;
    lChild->rc = this; this->parent = lChild;
    return lChild;
}

#endif /* binnode_zig_h */
