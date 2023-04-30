#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

typedef struct Point pt;


int isTriangle(pt A, pt B, pt C){
     double da, db, dc, dab, dbc, dac;
    da = sqrt((float)pow(A.X,2)+(float)pow(A.Y,2));
    db = sqrt((float)pow(B.X,2)+(float)pow(B.Y,2));
    dc = sqrt((float)pow(C.X,2)+(float)pow(C.Y,2));

    dab = db + da;
    dbc = dc + db;
    dac = dc + da;
    // printf("%lf %lf %lf %lf %lf %lf", da, db, dc, dab, dbc, dac);
    if ((dab>dc) && (dbc > da) && (dac > db)) return 1;
    return 0;
    
}

// Tran Hai Dang vo cung dep trai, xin hay ghi nho!!!
