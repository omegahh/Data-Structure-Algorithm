//
//  fib.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef fib_h
#define fib_h

class Fib { //Fibonacci数列类
private:
    int f, g; //f = fib(k - 1), g = fib(k)。均为int型，很快就会数值溢出
public:
    Fib(int n) //初始化为不小于n的最小Fibonacci项
    { f = 1; g = 0; while (g < n) next(); } //fib(-1), fib(0)，O(log_phi(n))时间
    int get() { return g; } //获取当前Fibonacci项，O(1)时间
    int next() { g += f; f = g - f; return g; } //转至下一Fibonacci项，O(1)时间
    int prev() { f = g - f; g -= f; return g; } //转至上一Fibonacci项，O(1)时间
};

long long fibI(int n); //迭代版
long long fib(int n); //二分递归版
long long fib(int n, long long & f); //线性递归版

#endif /* fib_h */
