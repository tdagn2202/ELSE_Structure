#include <stdio.h>
#include <stdlib.h> 

struct Point{
    double x;
    double y;
};

typedef struct Point pt;

int main(){
    pt a;
scanf("%lf%lf", &a.x, &a.y);
printf("%.3lf %.3lf", a.x, a.y);
system("Pause");
}