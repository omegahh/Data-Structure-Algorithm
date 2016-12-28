//
//  vector_quicksort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> //向量快速排序
void Vector<T>::quickSort(Rank lo, Rank hi) { //0 <= lo < hi <= size
    printf("\tQUICKsort [%d, %d)\n", lo, hi );
    if (hi - lo < 2) return; //单元素区间自然有序，否则...
    Rank mi = partition(lo, hi - 1); //在[lo, hi - 1]内构造轴点
    quickSort(lo, mi); //对前缀递归排序
    quickSort(mi + 1, hi); //对后缀递归排序
}
