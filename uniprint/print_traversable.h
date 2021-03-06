//
//  print_traversable.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef print_traversable_h
#define print_traversable_h

/******************************************************************************************
 * 向量、列表等支持traverse()遍历操作的线性结构
 ******************************************************************************************/

template <typename T> //元素类型
void UniPrint::p(T & s) { //引用
    printf("\n%s[%d] -> %p:\n", typeid(s).name(), s.size(), &s); //基本信息
    s.traverse(print); //通过print()遍历输出所有元素
    printf("\n");
}

#endif /* print_traversable_h */
