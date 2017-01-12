//
//  displaylaby.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef displaylaby_h
#define displaylaby_h

/******************************************************************************************
 *   输出某一迷宫格的信息
 ******************************************************************************************/
void printLabyCell(Cell * elem) {
    printf("%d -> (%d, %d) -> %d\n", ((Cell *) elem)->incoming, ((Cell *) elem)->x, ((Cell *) elem)->y, ((Cell *) elem)->outgoing);
}

/******************************************************************************************
 * 显示迷宫
 ******************************************************************************************/
void displayLaby() { //┘└┐┌│─
    static const char * pattern[5][5] = {
        "┼", "┼", "┼", "┼", "┼",
        "┼", " ", "┌", "─", "└",
        "┼", "┌", " ", "┐", "│",
        "┼", "─", "┐", " ", "┘",
        "┼", "└", "│", "┘", " "
    };
    printf(" ");
    for (int j = 0; j < labySize; j++)
        (j < 10) ? printf("%X", j) : printf("%c", 'A' - 10 + j);
    printf("\n");
    for (int j = 0; j < labySize; j++) {
        (j < 10) ? printf("%X", j) : printf("%c", 'A' - 10 + j);
        for (int i = 0; i < labySize; i++)
            if (goalCell == &laby[i][j])
                printf("$");
            else
                switch (laby[i][j].status) {
                    case WALL      : printf("█"); break;
                    case TRACKED   : printf("○"); break;
                    case AVAILABLE : printf(" "); break;
                    default        : printf("%s", pattern[laby[i][j].outgoing][laby[i][j].incoming]); break;
                }
        printf("\n");
    }//for
}//displayLaby

#endif /* displaylaby_h */
