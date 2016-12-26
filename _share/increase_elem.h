//
//  increase_elem.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> struct Increase { //函数对象：递增一个T类对象
    virtual void operator() (T & e) { e++; }
}; //假设T可直接递增或已重载++
