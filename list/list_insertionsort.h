//
//  list_insertionsort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

template <typename T> //列表的插入排序算法：对起始于位置p的n个元素排序
void List<T>::insertionSort(ListNodePosi(T) p, int n) { //valid(p) && rank(p) + n <= size
    printf("InsertionSort ...\n");
    for (int r = 1; r <= n; r++) { //逐一为各节点
        insertA(search(p->data, r, p), p->data); //查找适当的位置并插入
        p = p->succ; remove(p->pred); //转向下一节点
    }
}
