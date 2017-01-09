//
//  priorty.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef priority_h
#define priority_h

#define N_OPTR 9 //运算符总数
typedef enum { ADD, SUB, MUL, DIV, POW, FAC, L_P, R_P, EOE } Operator; //运算符集合
//加、减、乘、除、乘方、阶乘、左括号、右括号、起始符与终止符

const char pri[N_OPTR][N_OPTR] = { //运算符优先等级 [栈顶] [当前]
    /*              |--------------------- 当 前 运 算 符 ----------------------| */
    /*               +      -      *      /      ^      !      (      )      \0 */
    /* ---  + */    '>',   '>',   '<',   '<',   '<',   '<',   '<',   '>',   '>',
    /* o    - */    '>',   '>',   '<',   '<',   '<',   '<',   '<',   '>',   '>',
    /* p o  * */    '>',   '>',   '>',   '>',   '<',   '<',   '<',   '>',   '>',
    /* e f  / */    '>',   '>',   '>',   '>',   '<',   '<',   '<',   '>',   '>',
    /* r    ^ */    '>',   '>',   '>',   '>',   '>',   '<',   '<',   '>',   '>',
    /* a t  ! */    '>',   '>',   '>',   '>',   '>',   '>',   ' ',   '>',   '>',
    /* t o  ( */    '<',   '<',   '<',   '<',   '<',   '<',   '<',   '=',   ' ',
    /* o p  ) */    ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',
    /* r   \0 */    '<',   '<',   '<',   '<',   '<',   '<',   '<',   ' ',   '='
};

#endif /* priority_h */