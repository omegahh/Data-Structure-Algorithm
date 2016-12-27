//
//  increase_vector.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

#include "../vector/vector.h"


template <typename T>
void increase(Vector<T> &V) { //统一递增向量中的各元素
    Increase<T> elem;
    V.traverse(elem); //以 Increase<T>() 为基本操作进行遍历
}
