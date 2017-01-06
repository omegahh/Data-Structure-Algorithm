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

static void print(char * x) { printf(" %s", x ? x : "<NULL>"); } //字符串特别处理
static void print(const char * x) { printf(" %s", x ? x : "<NULL>"); } //字符串特别处理

class UniPrint {
public:
    static void p(int e) { printf(" %04d", e); }
    static void p(float e) { printf(" %4.1f", e); }
    static void p(double e) { printf(" %4.1f", e); }
    static void p(char e) { printf(" %c", (31 < e) ? e : '$'); }

    template <typename T> static void p(T &); //向量、列表等支持traverse()遍历操作的线性结构
    template <typename T> static void p(T * s) //所有指针
    { s ? p(*s) : print("<NULL>"); } //统一转为引用
}; //UniPrint

/******************************************************************************************
 * 数据元素、数据结构通用输出接口
 ******************************************************************************************/
template <typename T> static void print(T * x) { x ? print(*x) : printf(" <NULL>"); }
template <typename T> static void print(T & x) { UniPrint::p(x); }
template <typename T> static void print(const T & x) { UniPrint::p(x); } //for Stack

#include "print_implementation.h"

#endif /* print_h */




















//#include "../huffman/huffchar.h" //Huffman超字符
//#include "../bintree/bintree.h" //二叉树
//#include "../huffman/hufftree.h" //Huffman树
//#include "../bst/bst.h" //二叉搜索树
//#include "../avl/avl.h" //AVL树
//#include "../splay/splay.h" //伸展树
//#include "../redblack/redblack.h" //红黑树
//#include "../btree/btree.h" //二叉搜索树
//#include "../entry/entry.h" //词条
//#include "../skiplist/quadlist.h" //四叉表
//#include "../skiplist/skiplist.h" //跳转表
//#include "../hashtable/hashtable.h" //散列表
//#include "../pq_List/pq_list.h" //基于列表实现的优先级队列
//#include "../pq_complheap/pq_complheap.h" //基于完全堆实现的优先级队列
//#include "../pq_leftheap/pq_leftheap.h" //基于左式堆实现的优先级队列
//#include "../graph/graph.h" //图
//#include "../graphmatrix/graphmatrix.h" //基于邻接矩阵实现的图

//    static void p(HuffChar &); //Huffman（超）字符
//    static void p(VStatus); //图顶点的状态
//    static void p(EType); //图边的类型

//    template <typename K, typename V> static void p(Entry<K, V> &); //Entry
//    template <typename T> static void p(BinNode<T> &); //BinTree节点
//    template <typename T> static void p(BinTree<T> &); //二叉树
//    template <typename T> static void p(BTree<T> &); //B-树
//    template <typename T> static void p(BST<T> &); //BST
//    template <typename T> static void p(AVL<T> &); //AVL
//    template <typename T> static void p(RedBlack<T> &); //RedBlack
//    template <typename T> static void p(Splay<T> &); //Splay
//    template <typename T> static void p(Quadlist<T> &); //Quadlist
//    template <typename K, typename V> static void p(Skiplist<K, V> &); //Skiplist
//    template <typename K, typename V> static void p(Hashtable<K, V> &); //Hashtable
//    template <typename T> static void p(PQ_List<T> &); //PQ_List
//    template <typename T> static void p(PQ_ComplHeap<T> &); //PQ_ComplHeap
//    template <typename T> static void p(PQ_LeftHeap<T> &); //PQ_LeftHeap
//    template <typename Tv, typename Te> static void p(GraphMatrix<Tv, Te> &); //Graph
