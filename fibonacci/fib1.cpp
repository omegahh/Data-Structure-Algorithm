//
//  fib1.cpp
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//
//计算Fibonacci数列的第n项（二分递归版）：O(2^n)

long long fib(int n) {
    //若到达递归基，直接取值；否则，递归计算前两项，其和即为正解
    return (2 > n) ? (long long) n : fib(n - 1) + fib(n - 2);
}
