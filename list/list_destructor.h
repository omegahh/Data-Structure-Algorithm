//
//  list_destructor.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_destructor_h
#define list_destructor_h

template <typename T> List<T>::~List() //列表析构器
{ clear(); delete header; delete trailer; } //清空列表，释放头、尾哨兵节点

#endif /* list_destructor_h */
