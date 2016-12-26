//
//  vector_merge_optimized.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

/*DSA*/  //原基本实现易于理解、可移植性强，但针对向量归并排序的情况，可优化如下
for ( Rank i = 0, j = 0, k = 0; j < lb; ) { //将B[j]和C[k]中的小者续至A末尾
    if ( ( k < lc ) &&                ( C[k] <  B[j] )   ) A[i++] = C[k++];
        if (               ( lc <= k ) || ( B[j] <= C[k] )   ) A[i++] = B[j++];
            }
/*DSA*/  //交换循环体内两句的次序，删除冗余逻辑