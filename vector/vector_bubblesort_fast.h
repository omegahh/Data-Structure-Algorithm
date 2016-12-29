//
//  vector_bubblesort_fast.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> //向量的起泡排序
void Vector<T>::bubbleSort(Rank lo, Rank hi) //assert: 0 <= lo < hi <= size
{ while (lo < (hi = bubble(lo, hi))); } //逐趟做扫描交换，直至全序
