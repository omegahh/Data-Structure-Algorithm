//
//  rand.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

#include <stdlib.h>
#include <time.h> //通常用当前时刻设置随即种子

/******************************************************************************************
 * 在[0, range)内随机生成一个数
 ******************************************************************************************/
static int dice(int range) { return rand() % range; } //取 [0, range) 中的随机整数
static int dice(int lo, int hi) { return lo + rand() % (hi - lo); } //取 [lo, hi) 中的随机整数
static float dice(float range) { return rand() % (1000 * (int) range) / (float) 1000.; }
static double dice(double range) { return rand() % (1000 * (int) range) / (double) 1000.; }
static char dice(char range) { return (char) (32 + rand() % 96); }
