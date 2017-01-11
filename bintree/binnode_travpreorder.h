//
//  binnode_travpreorder.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_travpreorder_h
#define binnode_travpreorder_h

/*DSA*/#include "../stack/stack.h" //引入栈模板类
/*DSA*/#include "binnode_travpreorder_r.h"
/*DSA*/#include "binnode_travpreorder_i1.h"
/*DSA*/#include "binnode_travpreorder_i2.h"
template <typename T> template <typename VST> //元素类型、操作器
void BinNode<T>::travPre ( VST& visit ) { //二叉树先序遍历算法统一入口
    switch ( rand() % 3 ) { //此处暂随机选择以做测试，共三种选择
        case 1: travPre_I1 ( this, visit ); break; //迭代版#1
        case 2: travPre_I2 ( this, visit ); break; //迭代版#2
        default: travPre_R ( this, visit ); break; //递归版
    }
}

#endif /* binnode_travpreorder_h */
