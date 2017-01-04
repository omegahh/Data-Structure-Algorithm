//
//  list_implementation.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

/******************************************************************************************
 * 将List各方法的实现部分，简洁地引入list.h
 * 效果等同于将这些实现直接汇入list.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#include "../_share/release.h"
#include "../_share/util.h"

#include "listnode.h"

#include "list_bracket.h"

#include "list_initialize.h"
#include "list_copynodes.h"
#include "list_constructor.h"
#include "list_destructor.h"

#include "list_disordered.h"

#include "list_find.h"
#include "list_search.h"

#include "list_insert.h"
#include "list_remove.h"
#include "list_clear.h"

#include "list_traverse.h"

#include "list_sort.h"
#include "list_insertionsort.h"
#include "list_selectmax.h"
#include "list_selectionsort.h"
#include "list_merge.h"
#include "list_mergesort.h"

#include "list_deduplicate.h"
#include "list_uniquify.h"

#include "list_reverse_a.h"
