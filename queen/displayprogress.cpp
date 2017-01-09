//
//  displayprogress.cpp
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "queen_stack.h"

int N = 0; //棋盘大小

void displayRow(Queen & q) { //打印当前皇后（放置于col列）所在行
    printf("%2d: ", q.x);
    int i = 0;
    while (i++ < q.y) printf("[]");
    printf("█");
    while (i++ < N) printf("[]");
    printf("%2d\n", q.y);
}

void displayProgress(Stack<Queen> & S, int nQueen) { //在棋盘上显示搜查的进展
    N = nQueen; S.traverse(displayRow);
    if (nQueen <= S.size())
        std::cout << nSolu << " solution(s) found after " << nCheck << " check(s)\a";
    getchar();
}
