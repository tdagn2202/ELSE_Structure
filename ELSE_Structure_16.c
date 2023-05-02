#include <stdio.h>
#include <stdlib.h> 

typedef struct cplx{
    double Real, Image;
} Complex;

void add(Complex a, Complex b, Complex *c){
    Complex sum;
    sum.Real = a.Real +  b.Real;
    sum.Image = a.Image + b.Image;
    *c = sum;
}

void printComplex(Complex a){
    printf("%.3lf + i%.3lf\n", a.Real, a.Image);
}
Complex readComplex(){
    Complex a;
    scanf("%lf%lf", &a.Real, &a.Image);
    return a;
}
