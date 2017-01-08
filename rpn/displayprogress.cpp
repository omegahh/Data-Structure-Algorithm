//
//  displayprogress.cpp
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "rpn.h"
#include "../uniprint/print.h"

/******************************************************************************************
 * 输出运算符
 ******************************************************************************************/
void printChar(char & p)
{ ('\0' == p) ? printf("\\0 ") : printf("%c  ", p); }

/******************************************************************************************
 * 显示表达式处理进展
 ******************************************************************************************/
void displayProgress(char * expr, char * pCh, Stack<float> & opndStk, Stack<char> & optrStk, char * rpn ) {
    printf ( "\n" );
    for (char * p = expr; '\0' != *p; p++) printf(" %c", *p); printf(" $\n");
    for (char * p = expr; p < pCh; p++) printf("  ");
    if ('\0' != * (pCh - 1))
    { for (char * p = pCh; '\0' != * p; p++) printf(" %c", * p); printf(" $"); }
    printf("\n");
    for (char * p = expr; p < pCh; p++) printf("--"); printf(" ^\n\n");
    print(optrStk); printf("\n");
    print(opndStk); printf("\n");
    printf("RPN:\n %s\n\n", rpn); //输出RPN
}
