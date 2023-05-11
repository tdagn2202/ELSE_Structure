#include <stdio.h>
#include <stdlib.h> 

typedef struct PhanSo{
    int TuSo, MauSo;
}ps;

ps nhapPhanSo(){
    ps a;
    scanf("%d%d", &a.TuSo, &a.MauSo);
    return a;
}

void inPhanSo(ps a){
    printf("%d/%d", a.TuSo, a.MauSo);
}

