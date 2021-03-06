//
//  rand.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef rand_h
#define rand_h

#include <stdlib.h>

/******************************************************************************************
 * 在[0, range)内随机生成一个数
 ******************************************************************************************/
static inline int dice(int range) { return rand() % range; } //取 [0, range) 中的随机整数
static inline int dice(int lo, int hi) { return lo + rand() % (hi - lo); }
static inline float dice(float range) { return rand() % (1000 * (int) range) / (float) 1000.; }
static inline double dice(double range) { return rand() % (1000 * (int) range) / (double) 1000.; }
static inline char dice(char range) { return (char) (32 + rand() % 96); }

#endif /* rand_h */
