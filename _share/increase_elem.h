//
//  increase_elem.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef increase_elem_h
#define increase_elem_h

template <typename T> struct Increase { //函数对象：递增一个T类对象
    virtual void operator() (T & e) { e++; }
}; //假设T可直接递增或已重载++

#endif /* increase_elem_h */
