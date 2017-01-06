//
//  list_clear.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_clear_h
#define list_clear_h

template <typename T> int List<T>::clear() { //清空列表
    int oldSize = _size;
    while (0 < _size) remove(header->succ); //反复删除首节点，直至列表变空
    return oldSize;
}

#endif /* list_clear_h */
