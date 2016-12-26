//
//  fib0.cpp
//  fibonacci
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

long long fibI(int n) { //计算Fibonacci数列的第n项（迭代版）：O(n)
    long long f = 1, g = 0; //初始化：fib(-1)、fib(0)
    while (0 < n--) { g += f; f = g - f; } //依据原始定义，通过n次加法和减法计算fib(n)
    return g; //返回
}
