//
//  main.cpp
//  conversion
//
//  Created by BB8 on 17/1/6.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include <iostream>
#include "convert.h"

/******************************************************************************************
 * 进制转换
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
    if (argc < 3) { std::cout << "Usage: " << argv[0] << " <integer> <base>" << std::endl; return -1; }
    for (int i = 1; i < argc; i += 2) {
        system("cls");
        long long n = atoll(argv[i]); //待转换的十进制数
        if(0 >= n) //参数检查
        { std::cout << "But " << n << " is not a positive integer" << std::endl; return -2; }
        int base = atoi(argv[i+1]); //目标进制
        if (2 > base || base > 16) //参数检查
        { std::cout << "But " << base << " is not between 2 and 16" << std::endl; return -2; }
        Stack<char> S; //用栈记录转换得到的各数位
        convert(S, n, base); //进制转换
        printf("%20lld_(10) = ", n);
        while (!S.empty()) printf("%c", (S.pop())); //逆序输出栈内数位，即正确结果
        printf("_(%d)\a\n", base); getchar();
    }
    return 0;
}
