//
//  list_remove.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_remove_h
#define list_remove_h

template <typename T> T List<T>::remove(ListNodePosi(T) p) { //删除合法节点p，返回其数值
    T e = p->data; //备份待删除节点的数值（假定T类型可直接赋值）
    p->pred->succ = p->succ; p->succ->pred = p->pred; //后继、前驱
    delete p; _size--; //释放节点，更新规模
    return e; //返回备份的数值
}

#endif /* list_remove_h */
