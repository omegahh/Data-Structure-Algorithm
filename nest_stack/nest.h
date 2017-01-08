//
//  nest.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/8.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef nest_h
#define nest_h

#include<iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../uniprint/print.h"
#include "../stack/stack.h"

bool paren(const char exp[], int lo, int hi);
void displaySubstring(const char exp[], int lo, int hi);
void displayProgress(const char exp[], int i, Stack<char> S);

#endif /* nest_h */
