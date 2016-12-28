//
//  crc_vector.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

#include "../vector/vector.h"
#include "../uniprint/print.h"

template <typename T>
void crc(Vector<T> & V) { //统计向量的特征（所有元素之和）
    T crc = 0;
    Crc<T> elem(crc);
    V.traverse(elem); //以 crc 为基本操作进行遍历
    printf("SUM =");
    print(crc);
    printf("\n"); //输出统计得到的特征
}
