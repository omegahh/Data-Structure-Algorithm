//
//  queen.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef queen_h
#define queen_h

struct Queen { //皇后类
    int x, y; //皇后在棋盘上的位置坐标
    Queen(int xx = 0, int yy = 0) : x(xx), y(yy) {};
    bool operator== (Queen const & q) const { //重载判等操作符，以检测不同皇后之间可能的冲突
        return (x == q.x) || (y == q.y) //行列冲突（行冲突其实并不会发生，可省略）
        || (x + y == q.x + q.y) || (x - y == q.x - q.y); //沿正反对角线冲突
    }
    bool operator!= (Queen const & q) const { return ! (* this == q); } //重载不等操作符
};

#endif /* queen_h */
