//
//  double_elem.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef double_elem_h
#define double_elem_h

template <typename T> struct Double { //函数对象：倍增一个T类对象
    virtual void operator() (T & e) { e *= 2; }
}; //假设T可直接倍增

#endif /* double_elem_h */
