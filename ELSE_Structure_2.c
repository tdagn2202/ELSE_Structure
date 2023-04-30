    #include <stdio.h>
    #include <stdlib.h> 

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

    int main(){

        struct Point a;
        a = readPoint(); // Gọi hàm nhập 1 điểm từ bàn phím
        printPoint(a); // Hiển thị điểm a lên màn hình

    system("pause ");
    }