//
//  binnode_stretchbyzig.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_stretchbyzig_h
#define binnode_stretchbyzig_h

//通过zig旋转调整，将子树x拉伸成最右侧通路
template <typename T> void stretchByZig ( BinNodePosi(T) & x, int h ) {
    /*DSA*/   int c = 0;
    for ( BinNodePosi(T) v = x; v; v = v->rc ) {
        while ( v->lc )
        /*DSA*/{
            v = v->zig();
            /*DSA*/c++;
            /*DSA*/}
        v->height = --h;
    }
    while ( x->parent ) x = x->parent;
    /*DSA*/printf ( "\nh = %d, c = %d\n\n", h, c );
}

#endif /* binnode_stretchbyzig_h */
