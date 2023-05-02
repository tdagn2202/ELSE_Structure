#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
typedef struct sinhvien{
    char *HoTen;
    float LT, TH;
    char *DC;
} SinhVien;

SinhVien nhapSV(){
    SinhVien a; 

    a.HoTen = malloc(sizeof(char) * 50);
    fgets(a.HoTen,50,stdin);
    
if (a.HoTen[strlen(a.HoTen)-1]=='\n')
       a.HoTen[strlen(a.HoTen)-1]='\0';

    scanf("%f%f", &a.LT, &a.TH);
    double sum = a.LT + a.TH;
    a.DC = malloc(sizeof(char)*3);

     if (sum<4.0) {
        strcpy(a.DC, "F");
    } else if (sum>=4.0 && sum<4.5) {
        strcpy(a.DC, "D");
    } else if (sum>=4.5 && sum<5.0) {
        strcpy(a.DC, "D+");
    } else if (sum>=5.0 && sum<6.0) {
        strcpy(a.DC, "C");
    } else if (sum>=6.0 && sum<7.0) {
        strcpy(a.DC, "C+");
    } else if (sum>=7.0 && sum<8.0) {
        strcpy(a.DC, "B");
    } else if (sum>=8.0 && sum<9.0) {
        strcpy(a.DC, "B+");
    } else if (sum>=9.0) {
        strcpy(a.DC, "A");
    }

return a;

}

void inSV(SinhVien a){
    printf("%s %.3f %.3f %s\n",a.HoTen,a.LT,a.TH, a.DC);
    }
