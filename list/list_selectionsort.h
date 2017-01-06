//
//  list_selectionsort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_selectionsort_h
#define list_selectionsort_h

template <typename T> //列表的选择排序算法：对起始于位置p的n个元素排序
void List<T>::selectionSort(ListNodePosi(T) p, int n) { //valid(p) && rank(p) + n <= size
    printf("SelectionSort ...\n");
    ListNodePosi(T) head = p->pred; ListNodePosi(T) tail = p;
    for (int i = 0; i < n; i++) tail = tail->succ; //待排序区间为(head, tail)
    while (1 < n) { //在至少还剩两个节点之前，在待排序区间内
        ListNodePosi(T) max = selectMax(head->succ, n); //找出最大者（歧义时后者优先）
        insertB(tail, remove(max)); //将其移至无序区间末尾（作为有序区间新的首元素），remove 返回值即为 e。
        tail = tail->pred; n--;
    }
}

#endif /* list_selectionsort_h */
