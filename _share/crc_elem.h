//
//  crc_elem.h
//  Data Structure Algorithm  
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef crc_elem_h
#define crc_elem_h

//函数对象：累计T类对象的特征（比如总和），以便校验对象集合
template <typename T> struct Crc {
    T & c;
    Crc(T & crc) : c(crc) {}
    virtual void operator() (T & e) { c += e; } //假设T可直接相加
};

#endif /* crc_elem_h */
