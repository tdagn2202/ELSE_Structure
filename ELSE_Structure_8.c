struct Point{
    double X,Y;
};

struct Rect{
    struct Point upper_right, lower_left;    
};

int isIn(struct Point M, struct Rect r){
   double cx = (M.X-r.upper_right.X)/(r.lower_left.X-r.upper_right.X);
   double cy = (M.Y-r.upper_right.Y)/(r.lower_left.Y-r.upper_right.Y);
   return (cx>=0 && cx<=1&&cy>=0&&cy<=1);
}

