//
//  print_basic.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/26.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef print_basic_h
#define print_basic_h

void UniPrint::p(int e) { printf(" %04d", e); }
void UniPrint::p(float e) { printf(" %4.1f", e); }
void UniPrint::p(double e) { printf(" %4.1f", e); }
void UniPrint::p(char e) { printf(" %c", (31 < e) ? e : '$'); }

#endif /* print_basic_h */
