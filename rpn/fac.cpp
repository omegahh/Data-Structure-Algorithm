//
//  fac.cpp
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "rpn.h"

long long facI(int n) { long long f = 1; while (n > 1) f *= n--; return f; } //迭代版本
long long facR(int n) { return (n < 1) ? 1 : n * facR(n - 1); } //递归版本
