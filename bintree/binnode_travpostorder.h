//
//  binnode_travpostorder.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_travpostorder_h
#define binnode_travpostorder_h

/*DSA*/#include "../stack/stack.h" //引入栈模板类
/*DSA*/#include "binnode_travpostorder_r.h"
/*DSA*/#include "binnode_travpostorder_i.h"
template <typename T> template <typename VST> //元素类型、操作器
void BinNode<T>::travPost ( VST& visit ) { //二叉树后序遍历算法统一入口
    switch ( rand() % 2 ) { //此处暂随机选择以做测试，共两种选择
        case 1: travPost_I ( this, visit ); break; //迭代版
        default: travPost_R ( this, visit ); break; //递归版
    }
}

#endif /* binnode_travpostorder_h */
