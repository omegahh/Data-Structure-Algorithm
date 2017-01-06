//
//  vector_unsort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_unsort_h
#define vector_unsort_h

//等概率随机置乱区间[lo, hi)
template <typename T> void Vector<T>::unsort(Rank lo, Rank hi) {
    T * V = _elem + lo; //将子向量_elem[lo, hi)视作另一向量V[0, hi - lo)
    for (Rank i = hi - lo; i > 0; i--) //自后向前
        std::swap(V[i - 1], V[rand() % i]); //将V[i - 1]与V[0, i)中某一元素随机交换
}

#endif /* vector_unsort_h */
