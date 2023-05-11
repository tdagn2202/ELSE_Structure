#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

typedef struct Point pt;
int equal(pt a, pt b, double epsilon){
     double d;
    d = sqrt(((float)pow((a.X-b.X),2))+((float)pow((a.Y-b.Y),2)));
    if (d>=epsilon) return 0;
    return 1;

}
