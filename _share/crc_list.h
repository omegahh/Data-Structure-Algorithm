//
//  crc_list.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

#include "../list/list.h"
#include "../uniprint/print.h"

template <typename T>
void crc(List<T> & L) { //统计列表的特征（所有元素总和）
    T crc = 0;
    Crc<T> elem(crc);
    L.traverse(elem); //以crc为基本操作进行遍历
    printf("CRC =");
    print(crc); //输出统计得到的特征
    printf("\n");
}
