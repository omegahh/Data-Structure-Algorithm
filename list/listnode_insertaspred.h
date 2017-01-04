//
//  listnode_insertaspred.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/3.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

template <typename T> //将 e 紧靠当前节点之前插入于当前节点所属列表（设有哨兵头节点 header）
ListNodePosi(T) ListNode<T>::insertAsPred(T const & e) {
    ListNodePosi(T) x = new ListNode(e, pred, this); //创建新节点
    pred->succ = x; pred = x; //设置正向链接
    return x; //返回新节点位置
}
