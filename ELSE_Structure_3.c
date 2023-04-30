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

int main(){
struct Point A={1,10};
struct Point B={3,4};
	
printf("%.4f",distance(A,B));
system("Pause");
}