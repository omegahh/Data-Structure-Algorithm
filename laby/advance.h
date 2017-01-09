//
//  advance.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef advance_h
#define advance_h

inline Cell * advance(Cell * cell) { //从当前位置转入相邻格点
    Cell * next;
    switch (cell->outgoing) {
        case EAST:  next = cell + LABY_MAX; next->incoming = WEST;  break; //向东
        case SOUTH: next = cell + 1;        next->incoming = NORTH; break; //向南
        case WEST:  next = cell - LABY_MAX; next->incoming = EAST;  break; //向西
        case NORTH: next = cell - 1;        next->incoming = SOUTH; break; //向北
        default : exit(-1);
    }
    return next;
}

#endif /* advance_h */
