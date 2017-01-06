//
//  comparator.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef comparator_h
#define comparator_h

template <typename T> static bool lt(T *a, T *b) { return lt(*a, *b); } //less than
template <typename T> static bool lt(T &a, T &b) { return a < b; } //less than
template <typename T> static bool eq(T *a, T *b) { return eq(*a, *b); } //equal
template <typename T> static bool eq(T &a, T &b) { return a == b; } //equal

#endif /* comparator_h */
