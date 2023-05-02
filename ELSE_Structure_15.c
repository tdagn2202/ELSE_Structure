#include <stdio.h>
#include <stdlib.h> 

typedef struct cplx{
    double Real, Image;
} Complex;

Complex readComplex(){
    Complex a;
    scanf("%lf%lf", &a.Real, &a.Image);
    return a;
}

void printComplex(Complex a){
    printf("%.3lf + i%.3lf", a.Real, a.Image);
}
