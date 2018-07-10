//
//  example.h
//  test
//
//  Created by gaomei on 2018/4/24.
//  Copyright © 2018年 gaomei. All rights reserved.
//

#ifndef example_h
#define example_h

#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct point{
    double x;
    double y;
}point;

extern int gcd(int x,int y);

extern int replace(char *s,char och,char nch);

extern double distance(point *a,point *b);

#define MAGIC 0x31337



#endif /* example_h */
