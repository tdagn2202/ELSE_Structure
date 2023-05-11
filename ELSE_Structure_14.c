#include <stdio.h>
#include <stdlib.h> 

typedef struct cplx{
    double Real,Image;
} Complex;



int main(){
Complex a;
scanf("%lf%lf",&a.Real,&a.Image); // Nhap tu ban phim cho tung truong
printf("%.3lf + i%.3lf",a.Real,a.Image); //Hien thi 
}
