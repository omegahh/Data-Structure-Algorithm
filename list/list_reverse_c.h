//
//  list_reverse_c.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_reverse_c_h
#define list_reverse_c_h

template <typename T> void List<T>::reverse() { //前后倒置
    if (_size < 2) return; //平凡情况
    ListNodePosi(T) p; ListNodePosi(T) q;
    for (p = header, q = p->succ; p != trailer; p = q, q = p->succ)
        p->pred = q; //自前向后，依次颠倒各节点的前驱指针
    trailer->pred = NULL; //单独设置尾节点的前驱指针
    for (p = header, q = p->pred; p != trailer; p = q, q = p->pred)
        q->succ = p; //自前向后，依次颠倒各节点的后继指针
    header->succ = NULL; //单独设置头节点的后继指针
    std::swap(header, trailer); //头、尾节点互换
}

#endif /* list_reverse_c_h */
