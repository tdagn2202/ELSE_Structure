#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
struct Point{
    double x,y;
};

typedef struct Point pt;

double distance(pt a, pt b){
    double d;
    d = sqrt(((float)pow((a.x-b.x),2))+((float)pow((a.y-b.y),2)));
    return d;
}
