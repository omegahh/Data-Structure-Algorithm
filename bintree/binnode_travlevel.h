//
//  binnode_travlevel.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_travlevel_h
#define binnode_travlevel_h

/*DSA*/#include "../queue/queue.h" //引入队列
template <typename T> template <typename VST> //元素类型、操作器
void BinNode<T>::travLevel ( VST& visit ) { //二叉树层次遍历算法
    Queue<BinNodePosi(T)> Q; //辅助队列
    Q.enqueue ( this ); //根节点入队
    while ( !Q.empty() ) { //在队列再次变空之前，反复迭代
        BinNodePosi(T) x = Q.dequeue(); visit ( x->data ); //取出队首节点并访问之
        if ( HasLChild ( *x ) ) Q.enqueue ( x->lc ); //左孩子入队
        if ( HasRChild ( *x ) ) Q.enqueue ( x->rc ); //右孩子入队
    }
}

#endif /* binnode_travlevel_h */
