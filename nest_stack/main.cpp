//
//  main.cpp
//  nest_stack
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "nest.h"

/******************************************************************************************
 * 检查表达式括号是否匹配
 ******************************************************************************************/
int main(int argc, char* argv[]) {
    // 检查参数，至少要提供一个待检查的字符串
    if (2 > argc) {
        fprintf(stderr, "\nUsage: %s <string#1> <string#2> ... \n", argv[0]);
        fprintf(stderr, "For example %s (a[i-1][j+1])+a[i+1][j-1])*2\n", argv[0]);
        return -1;
    }
    // 逐一检查各串是否匹配
    for (int i = 1; i < argc; i++) {
        char * s = argv[i]; printf("\n检查：%s\n", s);
        paren(s, 0, ((int) strlen(s)) - 1) ? printf("\n%s: 匹配\a\n", s) : printf("\n%s: 不匹配\a\a\n", s);
    }
    return 0;
}
