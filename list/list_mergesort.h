//
//  list_mergesort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_mergesort_h
#define list_mergesort_h

template <typename T> //列表的归并排序算法：对起始于位置p的n个元素排序
void List<T>::mergeSort(ListNodePosi(T) & p, int n) { //valid(p) && rank(p) + n <= size
    printf("\tMERGEsort [%d]\n", n);
    if (n < 2) return; //若待排序范围已足够小，则直接返回；否则...
    int m = n >> 1; //以中点为界
    ListNodePosi(T) q = p; for (int i = 0; i < m; i++) q = q->succ; //均分列表
    mergeSort(p, m); mergeSort(q, n - m); //对前、后子列表分别排序
    merge(p, m, *this, q, n - m); //归并
} //注意：排序后，p依然指向归并后区间的（新）起点

#endif /* list_mergesort_h */
