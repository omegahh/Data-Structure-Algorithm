//
//  main.cpp
//  queue
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

/******************************************************************************************
 * Test of queue
 ******************************************************************************************/
#include "queue_test.h"

int testID = 0; //测试编号

/******************************************************************************************
 * 测试栈
 ******************************************************************************************/
template <typename T> //元素类型
void testQueue(int n) {
    Queue<T> Q;
    printf("\n==== Test %2d. Growing queue\n", testID++);
    while (Q.size() < n) {
        (Q.empty() || (30 < dice(100))) ? Q.enqueue(dice((T) 2 * n)) : Q.dequeue();  //70%入队，30%出队
        print(Q);
    }
    printf("\n==== Test %2d. Shrinking queue\n", testID++);
    while (!Q.empty()) {
        (70 < dice(100)) ? Q.enqueue(dice((T) 2 * n)) : Q.dequeue(); //30%入队，70%出队
        print(Q);
    }
}

/******************************************************************************************
 * 测试队列
 ******************************************************************************************/
int main(int argc, char * argv[]) {
    if (2 > argc) { printf("Usage: %s <size of test>\a\a\n", argv[0]); return 1; }
    srand((unsigned int) time(NULL));
    testQueue<int> (atoi(argv[1])); //元素类型可以在这里任意选择
    return 0;
}
