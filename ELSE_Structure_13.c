#include <stdio.h>
#include <stdlib.h> 

typedef struct PhanSo{
    int TuSo, MauSo;
} ps;

void inPhanSo(ps a){
    printf("%d/%d\n", a.TuSo, a.MauSo);
}

void chuanhoa(ps *pa){
    int rs,i;
    for (i=1; i <= pa->TuSo || i<= pa->MauSo ;i++){
      if ((pa->TuSo%i==0) && (pa->MauSo%i==0)) rs=i;
    } 

    pa->TuSo /= rs;
    pa->MauSo /=rs;
}

void nhan(ps a, ps b, ps*c){
    ps tich;
    tich.TuSo = a.TuSo * b.TuSo;
    tich.MauSo = a.MauSo * b.MauSo;
    chuanhoa(&tich);
    *c=tich;
}

int main(){
struct PhanSo a = {10,15};
struct PhanSo b = {2,3};
struct PhanSo c;
inPhanSo(a);
inPhanSo(b);
nhan(a,b,&c);
inPhanSo(c);
}
