//
//  checkOrder_Vector.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef checkorder_vector_h
#define checkorder_vector_h

#include "../vector/vector.h"

//判断向量是否整体有序
template <typename T>
void checkOrder(Vector<T> & V) {
    int unsorted = 0; //逆序计数器
    CheckOrder<T> elem(unsorted, V[0]);
    V.traverse(elem); //进行遍历
    if (0 < unsorted)
        printf ("Unsorted with %d adjacent disordered pair(s)\n", unsorted);
    else
        printf ("Sorted\n");
}

#endif /* checkorder_vector_h */
