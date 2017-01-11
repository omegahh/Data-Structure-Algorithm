//
//  checkOrder_elem.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef checkorder_elem_h
#define checkorder_elem_h

template <typename T> struct CheckOrder { //函数对象：判断一个T类对象是否局部有序
    T pred;
    int &u;
    CheckOrder(int &unsorted, T &first) : u(unsorted), pred(first) {} //冒号表示成员变量的初始化
    virtual void operator() (T & e) { if (pred > e) u++; pred = e; } //重载()操作符
};

#endif /* checkorder_elem_h */
