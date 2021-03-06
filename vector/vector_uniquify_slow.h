//
//  vector_uniquify_slow.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/28.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_uniquify_slow_h
#define vector_uniquify_slow_h

template <typename T> int Vector<T>::uniquify() { //有序向量重复元素剔除算法（低效版）
    int oldSize = _size; int i = 1; //当前比对元素的秩，起始于首元素
    while (i < _size) //从前向后，逐一比对各对相邻元素
        _elem[i-1] == _elem[i] ? remove(i) : i++; //若雷同，则删除后者；否则，转至后一元素
    return oldSize - _size; //向量规模变化量，即被删除元素总数
}

#endif /* vector_uniquify_slow_h */
