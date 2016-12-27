//
//  vector_remove.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> int Vector<T>::remove(Rank lo, Rank hi) { //删除区间[lo, hi)
    if (lo == hi) return 0; //出于效率考虑，单独处理退化情况，比如remove(0, 0)
    while (hi < _size) _elem[lo++] = _elem[hi++]; //[hi, _size)顺次前移hi - lo个单元
    _size = lo; //更新规模，直接丢弃尾部[lo, _size = hi)区间
    shrink(); //若有必要，则缩容
    return hi - lo; //返回被删除元素的数目
}

template <typename T> T Vector<T>::remove(Rank r) { //删除向量中秩为r的元素，0 <= r < size
    T e = _elem[r]; //备份被删除元素
    remove(r, r + 1); //调用区间删除算法，等效于对区间[r, r + 1)的删除
    return e; //返回被删除元素
}
