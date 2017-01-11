//
//  binnode_macro_redblack.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_macro_redblack_h
#define binnode_macro_redblack_h

#define IsBlack(p) (!(p) || (RB_BLACK == (p)->color)) //外部节点也视作黑节点
#define IsRed(p) (!IsBlack(p)) //非黑即红
#define BlackHeightUpdated(x) ((stature((x).lc) == stature((x).rc)) && ((x).height == (IsRed(& x) ? stature((x).lc) : stature((x).lc) + 1))) //RedBlack高度更新条件

#endif /* binnode_macro_redblack_h */
