//
//  increase_vector.h
//  
//
//  Created by BB8 on 16/12/23.
//
//

#pragma once

/*DSA*/#include "../vector/vector.h"

template <typename T>
void increase(Vector<T> &V) { //统一递增向量中的各元素
    V.traverse(increase<T>()); //以 increase<T>() 为基本操作进行遍历
}
