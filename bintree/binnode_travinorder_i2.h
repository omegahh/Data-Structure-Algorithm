//
//  binnode_travinorder_i1.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_travinorder_i2_h
#define binnode_travinorder_i2_h

template <typename T, typename VST> //元素类型、操作器
void travIn_I2 ( BinNodePosi(T) x, VST& visit ) { //二叉树中序遍历算法（迭代版#2）
    Stack<BinNodePosi(T)> S; //辅助栈
    while ( true )
        if ( x ) {
            S.push ( x ); //根节点进栈
            x = x->lc; //深入遍历左子树
        } else if ( !S.empty() ) {
            x = S.pop(); //尚未访问的最低祖先节点退栈
            visit ( x->data ); //访问该祖先节点
            x = x->rc; //遍历祖先的右子树
        } else
            break; //遍历完成
}

#endif /* binnode_travinorder_i2_h */
