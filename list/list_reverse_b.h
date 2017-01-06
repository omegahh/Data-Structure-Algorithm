//
//  list_reverse_b.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_reverse_b_h
#define list_reverse_b_h

template <typename T> void List<T>::reverse() { //前后倒置
    if (_size < 2) return; //平凡情况
    for (ListNodePosi(T) p = header; p; p = p->pred) //自前向后，依次
        std::swap(p->pred, p->succ); //交换各节点的前驱、后继指针
    std::swap(header, trailer); //头、尾节点互换
}

#endif /* list_reverse_b_h */
