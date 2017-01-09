//
//  main.cpp
//  laby
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "../_share/util.h"
#include "../stack/stack.h" //使用栈
#include "cell.h" //迷宫格点类

int labySize;
Cell* startCell;
Cell* goalCell;

#include "neighbor.h"
#include "advance.h"

#include "displaylaby.h"
#include "laby.h"

#include "randlaby.h"
#include "readlaby.h"

/******************************************************************************************
 * 迷宫寻径
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
    srand ( ( unsigned int ) time ( NULL ) ); //设置随机种子
    ( 1 < argc ) ? readLaby ( argv[1] ) : randLaby(); //使用指定迷宫文件，或随机生成
    labyrinth ( laby, startCell, goalCell ) ? //启动算法
    printf ( "\nRoute found\a\n" ) :
    printf ( "\nNo route found\a\n" );
    getchar();
    return 0;
}
