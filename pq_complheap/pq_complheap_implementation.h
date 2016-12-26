//
//  pq_complheap_implementation.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

/******************************************************************************************
 * 将PQ_PQ_ComplHeap各方法的实现部分，简洁地引入PQ_PQ_ComplHeap.h
 * 效果等同于将这些实现直接汇入PQ_PQ_ComplHeap.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#include "../_share/release.h"
#include "../_share/util.h"

#include "pq_complheap_insert.h"
#include "pq_complheap_getmax.h"
#include "pq_complheap_delmax.h"
#include "pq_complheap_percolateup.h"
#include "pq_complheap_percolatedown.h"
#include "pq_complheap_heapify.h"
