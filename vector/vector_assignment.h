//
//  vector_assignment.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_assignment_h
#define vector_assignment_h

template <typename T> Vector<T> &  Vector<T>::operator= (Vector<T> const &V) { //重载
    if (_elem) delete [] _elem; //释放原有内容
    copyFrom (V._elem, 0, V.size()); //整体复制
    return *this; //返回当前对象的引用，以便链式赋值
}

#endif /* vector_assignment_h */
