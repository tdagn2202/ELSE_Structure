#include <stdio.h>
#include <stdlib.h> 

typedef struct PhanSo{
    int TuSo, MauSo;
}a;

int main(){
struct PhanSo a;
scanf("%d%d",&a.TuSo,&a.MauSo); // Nhap tu ban phim cho tung truong
printf(" %d/%d)",a.TuSo, a.MauSo); //Hien thi 
}
