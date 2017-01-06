//
//  list_insert.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_insert_h
#define list_insert_h

template <typename T> ListNodePosi(T) List<T>::insertAsFirst(T const & e)
{ _size++; return header->insertAsSucc(e); } //e当作首节点插入

template <typename T> ListNodePosi(T) List<T>::insertAsLast(T const & e)
{ _size++; return trailer->insertAsPred(e); } //e当作末节点插入

template <typename T> ListNodePosi(T) List<T>::insertA(ListNodePosi(T) p, T const & e)
{ _size++; return p->insertAsSucc(e); } //e当作p的后继插入（After）

template <typename T> ListNodePosi(T) List<T>::insertB(ListNodePosi(T) p, T const & e)
{ _size++; return p->insertAsPred(e); } //e当作p的前驱插入（Before）

#endif /* list_insert_h */
