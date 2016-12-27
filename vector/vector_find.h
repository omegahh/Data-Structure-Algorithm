//
//  vector_find.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

//无序向量的顺序查找：返回最后一个元素e的位置；失败时，返回lo - 1
template <typename T>
Rank Vector<T>::find(T const & e, Rank lo, Rank hi) const { //assert: 0 <= lo < hi <= _size
    while ((lo < hi--) && (e != _elem[hi])); //从后向前，顺序查找
    return hi; //若hi < lo，则意味着失败；否则hi即命中元素的秩
}
