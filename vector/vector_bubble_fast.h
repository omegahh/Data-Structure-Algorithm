//
//  vector_bubble_fast.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_bubble_fast_h
#define vector_bubble_fast_h

template <typename T> Rank Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
    Rank last = lo; //最右侧的逆序对初始化为[lo - 1, lo]
    while (++lo < hi) //自左向右，逐一检查各对相邻元素
        if (_elem[lo - 1] > _elem[lo]) { //若逆序，则
            last = lo; //更新最右侧逆序对位置记录，并
            std::swap(_elem[lo - 1], _elem[lo]); //通过交换使局部有序
        }
    return last; //返回最右侧的逆序对位置
}

#endif /* vector_bubble_fast_h */
