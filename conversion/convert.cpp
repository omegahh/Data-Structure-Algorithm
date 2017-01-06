//
//  convert.cpp
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/6.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "convert.h"

void convert(Stack<char> & S, long long n, int base) { //十进制数n到base进制的转换（迭代版）
    static char digit[] //0 < n, 1 < base <= 16，新进制下的数位符号，可视base取值范围适当扩充
    = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while (n > 0) { //由低到高，逐一计算出新进制下的各数位
        int remainder = (int) (n % base); S.push(digit[remainder]); //余数（当前位）入栈
        printf("%20lld =", n);
        n /= base; //n更新为其对base的除商
        printf("%20lld * %d + %d\n", n, base, remainder);
        print(S); getchar();
    }
} //新进制下由高到低的各数位，自顶而下保存于栈S中
