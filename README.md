# Data Structure and Algorithms Codes

数据结构与算法（C++版）示例代码，Xcode 8.1 编译运行

包含 Target

- [x] 斐波那契数 fabonacci 算法的三种实现
- [x] 向量模版 vector 的实现
- [x] 列表模版 list 的实现
    - 列表实现在邓给的代码中，有序列表的 search，以及相关的 insertionSort 有问题，已修正
- [ ] 栈与队列
    - 栈的实现完成，注意：类模版继承类模版，需要 this-> 指定父类成员
    - 修改 Uniprint 类的方法实现，部分实现加上了 inline 关键词

**疑问**：

1. 为什么 ./uniprint/print.h 中，UniPrint 类中的静态函数必须要在类的实现中实现，如果是在外部文件实现，会在多个 .cpp 文件同时引用时有重复引用的报错？即使已经加上了 #ifndef。
2. 为什么函数对象在 Xcode 中不能未实例化就调用？而 VS 中可以，即 crc 和 checkorder 的实现。
3. 什么叫做偏特化？
