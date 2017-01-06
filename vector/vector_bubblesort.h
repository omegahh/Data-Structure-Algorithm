//
//  vector_bubblesort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_bubblesort_h
#define vector_bubblesort_h

template <typename T> //向量的起泡排序
void Vector<T>::bubbleSort(Rank lo, Rank hi) //assert: 0 <= lo < hi <= size
{ printf("\tBUBBLEsort [%d, %d)\n", lo, hi ); while (!bubble(lo, hi--)); } //逐趟做扫描交换，直至全序

#endif /* vector_bubblesort_h */
