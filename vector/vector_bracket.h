//
//  vector_bracket.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> T & Vector<T>::operator[] (Rank r) const //重载下标操作符
{ return _elem[r]; } // assert: 0 <= r < _size
