//
//  bintree_insert.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef bintree_insert_h
#define bintree_insert_h

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRoot ( T const& e )
{ _size = 1; return _root = new BinNode<T> ( e ); } //将e当作根节点插入空的二叉树

template <typename T> BinNodePosi(T) BinTree<T>::insertAsLC ( BinNodePosi(T) x, T const& e )
{ _size++; x->insertAsLC ( e ); updateHeightAbove ( x ); return x->lc; } //e插入为x的左孩子

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRC ( BinNodePosi(T) x, T const& e )
{ _size++; x->insertAsRC ( e ); updateHeightAbove ( x ); return x->rc; } //e插入为x的右孩子

#endif /* bintree_insert_h */
