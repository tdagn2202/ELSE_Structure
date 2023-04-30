#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

struct Point{
   double X,Y;
};

typedef struct Point pt;

// double distance(pt A, pt B){
//     double d;
//     d = sqrt(((float)pow((A.X-B.X),2))+((float)pow((A.Y-B.Y),2)));
//     return d;
// }

// double dodai(pt A){
//     double d;
//     d = sqrt((float)pow((A.X+A.Y),2));
//     printf("%lf", d);
//     return d;
    
// }

int isTriangle(pt A, pt B, pt C){
     double da, db, dc, dab, dbc, dac;
    da = sqrt((float)pow(A.X,2)+(float)pow(A.Y,2));
    db = sqrt((float)pow(B.X,2)+(float)pow(B.Y,2));
    dc = sqrt((float)pow(C.X,2)+(float)pow(C.Y,2));

    dab = db + da;
    dbc = dc + db;
    dac = dc + da;
    printf("%lf %lf %lf %lf %lf %lf", da, db, dc, dab, dbc, dac);
    if ((dab>dc) && (dbc > da) && (dac > db)) return 1;
    return 0;

    
}

int main(){
struct Point A={1,2};
struct Point B={1,3};
struct Point C={1,10};

if (isTriangle(A,B,C))
printf("YES");
else printf("NO");
system("Pause");
}