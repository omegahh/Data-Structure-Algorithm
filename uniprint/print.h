//
//  print.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef print_h
#define print_h

#include <stdio.h> //采用C风格精细控制输出格式

//#include "../bintree/bintree.h" //二叉树

//注意在头文件中实现方法时需要外部链接 external linkage，'static inline' is perferable.
static inline void print(char * x) { printf(" %s", x ? x : "<NULL>"); } //字符串特别处理
static inline void print(const char * x) { printf(" %s", x ? x : "<NULL>"); } //字符串特别处理

class UniPrint {
public:
    static void p(int);
    static void p(float);
    static void p(double);
    static void p(char);

//    template <typename T> static void p(BinNode<T> &); //BinTree节点
//    template <typename T> static void p(BinTree<T> &); //二叉树
    
    template <typename T> static void p(T &); //向量、列表等支持traverse()遍历操作的线性结构
    template <typename T> static void p(T * s) //所有指针
    { s ? p(*s) : print("<NULL>"); } //统一转为引用
}; //UniPrint

/******************************************************************************************
 * 数据元素、数据结构通用输出接口
 ******************************************************************************************/
template <typename T> static void print(T * x) { x ? print(*x) : print(" <NULL>"); }
template <typename T> static void print(T & x) { UniPrint::p(x); }
template <typename T> static void print(const T & x) { UniPrint::p(x); } //for Stack

#include "print_implementation.h"

#endif /* print_h */
