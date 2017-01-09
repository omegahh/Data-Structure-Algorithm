//
//  displayprogress.cpp
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "simu.h"

/******************************************************************************************
 * 显示当前各（窗口）队列情况
 ******************************************************************************************/
void displayProgress(Queue<Customer> windows[], int nWin, int now) {
    printf("============ Time: %4d ============\n", now);
    for (int i = 0; i < nWin; i++) { //对每个窗口，分别
        printf("Window #%c:  ", 'A' + i); //输出窗口编号
        windows[i].traverse(printCustomer); printf("\n"); //列出队列中的所有顾客
    }
}
