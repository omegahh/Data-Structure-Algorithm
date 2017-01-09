//
//  simu.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef simu_h
#define simu_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <unistd.h>

#include "../queue/queue.h" //引入队列
#include "customer.h" //顾客类

int bestWindow(Queue<Customer> window[], int nWin);
void printCustomer(Customer c);
void displayProgress(Queue<Customer> window[], int nWin, int now);
void simulate(int, int);

extern int delay; //控制进度显示的延迟

#endif /* simu_h */
