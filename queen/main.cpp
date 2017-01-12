//
//  main.cpp
//  queen
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "queen_stack.h"

#define QUEEN_MAX 20 //皇后最大数量

/******************************************************************************************
 * 全局变量
 ******************************************************************************************/
int nSolu = 0; //解的总数
int nCheck = 0; //尝试的总次数

/******************************************************************************************
 * n皇后（迭代版）
 ******************************************************************************************/
int main(int argc, char * argv[]) {
    int nQueen = atoi(argv[argc-1]); //棋盘大小 = 皇后总数
    if (QUEEN_MAX < nQueen || 1 > nQueen) { //检查参数
        fprintf(stderr, "\nUsage: %s [-step] <nQueen(%d)>\n", argv[0], QUEEN_MAX);
        return -1;
    }
    placeQueens(nQueen); //启动查找
    return 0;
}
