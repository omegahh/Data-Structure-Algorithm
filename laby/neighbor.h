//
//  neighbor.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef neighbor_h
#define neighbor_h

inline Cell * neighbor(Cell * cell) { //查询当前位置的相邻格点
    switch (cell->outgoing) {
        case EAST  : return cell + LABY_MAX; //向东
        case SOUTH : return cell + 1;        //向南
        case WEST  : return cell - LABY_MAX; //向西
        case NORTH : return cell - 1;        //向北
        default    : exit(-1);
    }
}

#endif /* neighbor_h */
