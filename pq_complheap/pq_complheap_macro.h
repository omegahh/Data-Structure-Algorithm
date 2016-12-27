//
//  pq_complheap_macro.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

#define InHeap(n, i)      (((-1) < (i)) && ((i) < (n))) //判断PQ[i]是否合法
#define Parent(i)         ((i- 1) >> 1)                 //PQ[i]的父节点（floor((i-1)/2)，i无论正负）
#define LastInternal(n)   Parent(n - 1)                 //最后一个内部节点（即末节点的父亲）
#define LChild(i)         (1 + ((i) << 1))              //PQ[i]的左孩子
#define RChild(i)         ((1 + (i)) << 1)              //PQ[i]的右孩子
#define ParentValid(i)    (0 < i)                       //判断PQ[i]是否有父亲
#define LChildValid(n, i) InHeap(n, LChild(i))          //判断PQ[i]是否有一个（左）孩子
#define RChildValid(n, i) InHeap(n, RChild(i))          //判断PQ[i]是否有两个孩子
#define Bigger(PQ, i, j)  (lt(PQ[i], PQ[j]) ? j : i)    //取大者（等时前者优先）
#define ProperParent(PQ, n, i) /*父子（至多）三者中的大者*/ \
(RChildValid(n, i) ? Bigger(PQ, Bigger(PQ, i, LChild(i)), RChild(i)) : \
(LChildValid(n, i) ? Bigger(PQ, i, LChild(i)) : i) \
) //相等时父节点优先，如此可避免不必要的交换
