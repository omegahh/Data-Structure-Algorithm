//
//  list_reverse_a.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_reverse_a_h
#define list_reverse_a_h

template <typename T> void List<T>::reverse() { //前后倒置
    ListNodePosi(T) p = header; ListNodePosi(T) q = trailer; //头、尾节点
    for (int i = 1; i < _size; i += 2) //（从首、末节点开始）由外而内，捉对地
        std::swap((p = p->succ)->data, (q = q->pred)->data); //交换对称节点的数据项
}

#endif /* list_reverse_a_h */
