#include <stdio.h>
#include <stdlib.h> 

typedef struct PhanSo {
    int TuSo, MauSo;
} ps;

void inPhanSo(ps a) {
    printf("%d/%d\n", a.TuSo, a.MauSo);
}

void chuanhoa(ps *pa) {
    int rs, i;
    for (i = 1; i <= pa->TuSo || i <= pa->MauSo; i++) {
        if ((pa->TuSo % i == 0) && (pa->MauSo % i == 0)) rs = i;
    } 
    pa->TuSo /= rs;
    pa->MauSo /= rs;
}

void quydong(ps *a, ps *b) {
    a->TuSo *= b->MauSo;
    b->TuSo *= a->MauSo;
    a->MauSo = a->MauSo * b->MauSo;
    b->MauSo = a->MauSo;
}

void cong(ps a, ps b, ps *c) {
    ps tong;
    if (a.MauSo != b.MauSo) quydong(&a, &b);
    tong.TuSo = a.TuSo + b.TuSo;
    tong.MauSo = a.MauSo;
    chuanhoa(&tong);
    *c = tong;
}
