SinhVien nhapSV(){
    
    SinhVien sv;
    
    char ht[50];

    fgets(ht,50,stdin);
    if (ht[strlen(ht)-1]=='\n')
           ht[strlen(ht)-1]='\0';
           
    sv.HoTen = strdup(ht);
    
    scanf("%f %f ",&sv.LT,&sv.TH);
    
    float diemtong = sv.LT+ sv.TH;
    
    sv.DiemChu = (char *) malloc(2);
    //char dc[2];
    //sv.DiemChu =strdup(dc);
    
    if(diemtong>=9)
       strcpy(sv.DiemChu,"A"); //sv.DiemChu ="A"
    else if(diemtong>=8 && diemtong<9)
        strcpy(sv.DiemChu,"B+");
    else if(diemtong>=7 && diemtong<8)
        strcpy(sv.DiemChu,"B");
    else if(diemtong>=6 && diemtong<7)    
        strcpy(sv.DiemChu,"C+");
    else if(diemtong>=5 && diemtong<6)   
        strcpy(sv.DiemChu,"C");
    else if(diemtong>=4.5 && diemtong<5)    
        strcpy(sv.DiemChu,"D+");
    else if(diemtong>=4 && diemtong<4.5)     
        strcpy(sv.DiemChu,"D");
    else
        strcpy(sv.DiemChu,"F");
    
    return sv;
}

void  inSV(SinhVien a){
    printf("%s %.3f %.3f %s", a.HoTen, a.LT, a.TH, a.DiemChu);
}

void nhapDS(SinhVien **pL, int n){
    
     (*pL) = (SinhVien *) malloc(n*sizeof(SinhVien));
     
      for(int i=0; i<n; i++)
          (*pL)[i] = nhapSV();
}

void inDS(SinhVien L[], int n){
    for(int i=0; i<n; i++){
        inSV(L[i]);
        printf("\n");
    }
          
}
