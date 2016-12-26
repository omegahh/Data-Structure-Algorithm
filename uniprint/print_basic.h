//
//  print_basic.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/26.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

/******************************************************************************************
 * 基本类型
 ******************************************************************************************/
void UniPrint::p(int e) { printf(" %04d", e); }
void UniPrint::p(float e) { printf(" %4.1f", e); }
void UniPrint::p(double e) { printf(" %4.1f", e); }
//void UniPrint::p(char e) { printf(" %c", (31 < e) && (e < 128) ? e : '$'); }
void UniPrint::p(char e) { printf(" %c", (31 < e) ? e : '$'); }
