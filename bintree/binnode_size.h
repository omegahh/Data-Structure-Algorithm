//
//  binnode_size.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_size_h
#define binnode_size_h

template <typename T> int BinNode<T>::size() { //统计当前节点后代总数，即以其为根的子树规模
    int s = 1; //计入本身
    if (lc) s += lc->size(); //递归计入左子树规模
    if (rc) s += rc->size(); //递归计入右子树规模
    return s;
}

#endif /* binnode_size_h */
