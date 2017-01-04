//
//  listnode.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/3.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

typedef int Rank;
#define ListNodePosi(T) ListNode<T> * //列表节点位置

template <typename T>
struct ListNode {  //列表节点模版类（以双向链表形式实现）
    //成员
    T data; ListNodePosi(T) pred; ListNodePosi(T) succ;
    //构造函数
    ListNode() {} //针对 header 和 trailer 的构造
    ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL) : data(e), pred(p), succ(s) {} //默认构造器
    //操作接口
    ListNodePosi(T) insertAsPred(T const & e); //紧靠当前节点之前插入新节点
    ListNodePosi(T) insertAsSucc(T const & e); //紧随当前节点之后插入新节点
};

#include "listnode_implementation.h"
