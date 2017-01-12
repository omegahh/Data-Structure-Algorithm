//
//  queen_stack.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef queen_stack_h
#define queen_stack_h

#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include "../stack/stack.h" //栈
#include "queen.h" //引入皇后类

extern int nSolu; //解的总数
extern int nCheck; //尝试的总次数

void placeQueens(int);
void displayRow(Queen & q, int);
void displayProgress(Stack<Queen> & S, int);

#endif /* queen_stack_h */
