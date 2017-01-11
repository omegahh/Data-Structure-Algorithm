//
//  binnode_preorder_r.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_travpreorder_r_h
#define binnode_travpreorder_r_h

template <typename T, typename VST> //元素类型、操作器
void travPre_R ( BinNodePosi(T) x, VST& visit ) { //二叉树先序遍历算法（递归版）
    if ( !x ) return;
    visit ( x->data );
    travPre_R ( x->lc, visit );
    travPre_R ( x->rc, visit );
}

#endif /* binnode_travpreorder_r_h */
