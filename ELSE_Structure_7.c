#include <stdio.h>
#include <stdlib.h> 

typedef struct Point{
    double X,Y;
} pt;

typedef struct Rect{
    pt upper_right, lower_left;    
} rct;

double area(rct a){
    double c,r;
    c = a.lower_left.Y-a.upper_right.Y;
    r = a.lower_left.X-a.upper_right.X;
    return -c*r;
}
