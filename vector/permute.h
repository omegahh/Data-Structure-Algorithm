//
//  permute.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> void permute(Vector<T> & V) { //随机置乱向量，使各元素等概率出现于各位置
    for (int i = V.size(); i > 0; i--) //自后向前
        swap(V[i - 1], V[rand() % i]); //V[i - 1]与V[0, i)中某一随机元素交换
}
