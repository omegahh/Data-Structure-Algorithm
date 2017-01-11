//
//  binnode_implementation.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/10.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_implementation_h
#define binnode_implementation_h

/******************************************************************************************
 * 将BinNode各方法的实现部分，简洁地引入BinNode.h
 * 效果等同于将这些实现直接汇入BinNode.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#include "binnode_macro.h"
#include "binnode_size.h" //后代数目
#include "binnode_insert.h" //插入
#include "binnode_succ.h" //取节点后继
#include "binnode_travpreorder.h" //先序遍历
#include "binnode_travinorder.h" //中序遍历
#include "binnode_travpostorder.h" //后序遍历
#include "binnode_travlevel.h" //层次遍历
#include "binnode_zig.h" //顺时针旋转
#include "binnode_zag.h" //逆时针旋转
#include "binnode_stretchbyzig.h"
#include "binnode_stretchbyzag.h"

#endif /* binnode_implementation_h */
