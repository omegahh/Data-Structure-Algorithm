//
//  stack@vector.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/6.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

#include "../vector/vector.h" //以向量为基类，派生出栈模板类

template <typename T> class Stack : public Vector<T> { //将向量的首/末端作为栈底/顶
public: //size()、empty()以及其它开放接口，均可直接沿用
    void push(T const & e) { this->insert(this->size(), e); } //入栈：等效于将新元素作为向量的末元素插入
    T pop() { return this->remove(this->size() - 1); } //出栈：等效于删除向量的末元素
    T & top() { return (*this)[this->size() - 1]; } //取顶：直接返回向量的末元素
};

// 注意：因为不像 VC++，Xcode 必须要加 this->
// https://www.zhihu.com/question/28139230
// 因为有偏特化，所以一个模板子类其实是不能在实例化之前就知道他的模板父类到底是谁，因此名字也无法resolve，所以只能this->了。
// 不过VC++有个小扩展，允许你不使用this->就可以调用父类的名字，特别方便。由此可见，其实也是完全可以做到的。
// http://stackoverflow.com/questions/10735611/use-of-undeclared-identifier-in-c-with-templates-and-inheritance
