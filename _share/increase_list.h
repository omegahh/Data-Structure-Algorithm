//
//  increase_list.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/26.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef increase_list_h
#define increase_list_h

#include "../list/list.h"

template <typename T>
void increase(List<T> & L) { //统一递增列表中的各元素
    Increase<T> elem;
    L.traverse(elem); //以Increase<T>()为基本操作进行遍历
}

#endif /* increase_list_h */
