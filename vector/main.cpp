//
//  main.cpp
//  vector
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

/******************************************************************************************
 * Test of Vector
 ******************************************************************************************/
#include "vector_test.h"

int testID = 0;

/******************************************************************************************
 * 测试：无序向量的（顺序）查找
 ******************************************************************************************/
template <typename T>
void testFind(Vector<T> & V, int n) {
    for (int i = 0; i <= V.size(); i++) {
        T a = (0 < i) ? V[i-1] : -INT_MAX / 2;
        T b = (i < V.size()) ? V[i] : INT_MAX / 2;
        T e = (a + b) / 2; print(e);
        Rank r = V.find(e);
        if (r < 0) printf(" : not found until rank V[%d] <> %d", r, e);
        else printf(" : found at rank V[%d] = %d", r, V[r]);
        printf("\n");
    }
}

/******************************************************************************************
 * 测试：有序向量的查找（binSearch或fibSearch）
 ******************************************************************************************/
template <typename T>
void testSearch(Vector<T> &V) {
    for (int i = 0; i < V.size(); i++) {
        T e = V[i]; printf("Looking for"); print(e); printf(" in ...\n"); print(V);
        Rank r = V.search(e);
        if (V[r] == e) printf("found at rank V[%d] = %d", r, V[r]);
        else printf("found at rank V[%d] = %d <> %d\a\a", r, V[r], e);
        printf("\n\n");
    }
    for (int i = 0; i <= V.size(); i++) {
        T a = (0 < i) ? V[i-1] : -INT_MAX / 2;
        T b = (i < V.size()) ? V[i] : INT_MAX / 2;
        T e = (a + b) / 2; printf("Looking for"); print(e); printf(" in ...\n"); print(V);
        Rank r = V.search(e);
        printf("V[%3d] = ", r); (r < 0) ? print("-INF") : print(V[r]); printf(" ~ ");
        printf("V[%3d] = ", r+1); if ((r+1) < V.size()) print(V[r+1]); else printf("+INF");
        bool ordered = true;
        if ((r >= 0) && (V[r] > e)) ordered = false;
        if ((r+1 < V.size()) && (V[r+1] <= e)) ordered = false;
        if (!ordered) printf("\tincorect search\a\a");
        printf("\n\n");
    }
}

/******************************************************************************************
 * 测试：有序向量的插入
 ******************************************************************************************/
template <typename T>
void testOrderedInsertion(Vector<T> &V, int n) {
    while (n * 2 > V.size()) {
        T e = dice((T) n * 2);
        printf("Inserting "); print(e); printf("...\n");
        V.insert(V.search(e) + 1, e);
        print(V);
    }
}

/******************************************************************************************
 * 测试向量
 ******************************************************************************************/
#define PRINT(x) { print(x); crc(x); checkOrder(x); }
template <typename T>
void testVector(int testSize) {
    printf("\n==== Test %2d. Generate a random vector\n", testID++);
    Vector<T> V;
    for (int i = 0; i < testSize; i++) V.insert(dice(i+1), dice((T) testSize * 3));
    PRINT(V); permute(V); PRINT(V);
    printf("\n==== Test %2d. Lowpass on\n", testID++); PRINT(V);
    int i = V.size(); while (0 < --i) { V[i-1] += V[i]; V[i-1] >>= 1; } PRINT(V);
    printf("\n==== Test %2d. Increase\n", testID++); PRINT(V);
    increase(V); PRINT(V);
    printf("\n==== Test %2d. FIND in\n", testID++); PRINT(V);
    testFind<T> (V, testSize);
    printf("\n==== Test %2d. Sort degenerate intervals each of size 1 in [%d, %d)\n", testID++, 0, V.size()); PRINT(V);
    for (int i = 0; i < V.size(); i += V.size() / 5) { V.sort(i, i); PRINT(V); } //element by element
    printf("\n==== Test %2d. Sort 5 intervals each of size %d in [%d, %d)\n", testID++, V.size() / 5, 0, V.size()); PRINT(V);
    for (int i = 0; i < V.size(); i += V.size() / 5) { V.sort(i, std::min(V.size(), i + V.size() / 5)); PRINT(V); } //interval by interval
    printf("\n==== Test %2d. Sort the entire vector of length-%d\n", testID++, V.size()); PRINT(V);
    V.sort(); PRINT(V);
    printf("\n==== Test %2d. FIND in\n", testID++); PRINT(V);
    testFind<T> (V, testSize);
    printf("\n==== Test %2d. SEARCH in\n", testID++); PRINT(V);
    testSearch<T> (V);
    printf("\n==== Test %2d. Unsort interval [%d, %d) in\n", testID++, V.size() / 4, 3 * V.size() / 4); PRINT(V);
    V.unsort(V.size() / 4, 3 * V.size() / 4); PRINT(V);
    printf("\n==== Test %2d. Unsort interval [%d, %d) in\n", testID++, 0, V.size()); PRINT(V);
    V.unsort(); PRINT(V);
    printf("\n==== Test %2d. Copy interval [%d, %d) from\n", testID++, V.size() / 4, 3 * V.size() / 4); PRINT(V);
    Vector<T> U(V, V.size() / 4, 3 * V.size() / 4);
    PRINT(U);
    printf("\n==== Test %2d. Copy from\n", testID++); PRINT(V);
    Vector<T> W(V);
    PRINT(W);
    printf("\n==== Test %2d. Clone from\n", testID++); PRINT(U);
    W = U;
    PRINT(W);
    printf("\n==== Test %2d. Remove redundancy in unsorted\n", testID++); PRINT(V);
    printf("%d node(s) removed\n", V.deduplicate()); PRINT(V);
    printf("\n==== Test %2d. Sort interval [%d, %d) in\n", testID++, 0, V.size()); PRINT(V);
    V.sort(); PRINT(V);
    printf("\n==== Test %2d. FIND in V[%d]\n", testID++, testSize); PRINT(V);
    testFind<T> (V, testSize);
    printf("\n==== Test %2d. SEARCH & INSERT in\n", testID++); PRINT(V);
    testOrderedInsertion<T> (V, testSize);  PRINT(V);
    printf("\n==== Test %2d. Remove redundancy in sorted\n", testID++); PRINT(V);
    printf("%d node(s) removed\n", V.uniquify()); PRINT(V);
}

/******************************************************************************************
 * 测试向量
 ******************************************************************************************/
int main(int argc, char* argv[]) {
    if (2 > argc) { printf("Usage: %s <size of test>\a\a\n", argv[0]); return 1; }
    srand((unsigned int) time(NULL));
    testVector<int> (atoi(argv[1]));
    return 0;
}





