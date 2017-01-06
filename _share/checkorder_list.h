//
//  checkorder_list.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/27.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef checkorder_list_h
#define checkorder_list_h

#include "../list/list.h"

template <typename T> void checkOrder(List<T> & L) { //判断列表是否整体有序
    int unsorted = 0; //逆序计数器
    CheckOrder<T> elem(unsorted, L.first()->data);
    L.traverse(elem); //进行遍历
    if (0 < unsorted)
        printf("Unsorted with %d adjacent disordered pair(s)\n", unsorted);
    else
        printf("Sorted\n");
    printf("DISORDERED = %d\n", L.disordered());
}

#endif /* checkorder_list_h */
