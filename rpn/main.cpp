//
//  main.cpp
//  rpn
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "rpn.h"

char * removeSpace(char * s) { //剔除s[]中的白空格
    char * p = s, * q = s;
    while (true) {
        while (std::isspace(* q)) q++;
        if ('\0' == * q) { * p = '\0'; return s; }
        * p++ = * q++;
    }
}

int main(int argc, char * argv[]) { //表达式求值（入口）
    for (int i = 1; i < argc; i++) { //逐一处理各命令行参数（表达式）
        printf("\nPress any key to evaluate: %s\n", argv[i]); getchar();
        char * rpn = (char *) malloc(sizeof(char) * 1); rpn[0] = '\0'; //逆波兰表达式
        float value = evaluate(removeSpace(argv[i]), rpn); //求值
        printf("EXPR : %s\n", argv[i]); //输出原表达式
        printf("RPN : [ %s]\n", rpn); //输出RPN
        printf("Value = %.1f = %d\n", value, (int) value); //输出表达式的值
        free(rpn); rpn = NULL;
    }
    return 0;
}
