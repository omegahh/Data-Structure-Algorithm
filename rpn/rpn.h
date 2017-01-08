//
//  rpn.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef rpn_h
#define rpn_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "../stack/stack.h" //使用栈
#include "priority.h"

long long facI(int); //阶乘运算迭代版
long long facR(int); //阶乘运算递归版
float calcu(float a, char op, float b);
float calcu(char op, float b);
void displayProgress(char *, char *, Stack<float> &, Stack<char> &, char *);
void readNumber(char * &, Stack<float> &);
Operator optr2rank(char);
char orderBetween(char, char);
void append(char * &, float); //重载
void append(char * &, char); //重载
float evaluate(char * expr, char * & rpn);

#endif /* rpn_h */
