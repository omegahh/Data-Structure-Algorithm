//
//  print_traversable.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

/******************************************************************************************
 * 向量、列表等支持traverse()遍历操作的线性结构
 ******************************************************************************************/
template <typename T> //元素类型
void UniPrint::p(T &s) { //引用
    printf("%s[%d]*%d:\n", typeid(s).name(), &s, s.size()); //基本信息
    s.traverse(print); //通过print()遍历输出所有元素
    printf("\n");
}
