     struct Point{
            float x;
            float y;
        };

    typedef struct Point pt;

    pt readPoint(){
       struct Point a;
       scanf("%f", &a.x);
       scanf("%f", &a.y);
       return a;
    }

    void printPoint(pt a){
        printf("(%.3f, %.3f)", a.x, a.y);
    };
