#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

typedef struct Point pt;

double distance(pt a, pt b){
    double d;
    d = sqrt(((float)pow((a.X-b.X),2))+((float)pow((a.Y-b.Y),2)));
    return d;
}
