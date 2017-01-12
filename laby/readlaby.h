//
//  readlaby.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef readlaby_h
#define readlaby_h

void readLaby(char * labyFile) { //读入迷宫
    FILE * fp;
    if (!(fp = fopen(labyFile, "r")))
    { std::cout << "can't open " << labyFile << std::endl; exit(-1); }
    fscanf(fp, "Laby Size = %d\n", & labySize);
    if (LABY_MAX < labySize)
    { std::cout << "Laby size " << labySize << " > " << LABY_MAX << std::endl; exit(-1); }
    int startX, startY; fscanf(fp, "Start = (%d, %d)\n", & startX, & startY);
    startCell = & laby[startX][startY];
    int goalX, goalY; fscanf(fp, "Goal = (%d, %d)\n", & goalX, & goalY);
    goalCell = & laby[goalX][goalY];
    for (int j = 0; j < labySize; j++)
        for (int i = 0; i < labySize; i++) {
            laby[i][j].x = i;
            laby[i][j].y = j;
            int type; fscanf(fp, "%d", & type);
            switch (type) {
                case 1  : laby[i][j].status = WALL; break;
                case 0  : laby[i][j].status = AVAILABLE; break;
                default : exit(-1);
            }
            laby[i][j].incoming = laby[i][j].outgoing = UNKNOWN;
        }
    fclose(fp);
}

#endif /* readlaby_h */
