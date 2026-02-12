#include<iostream>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double xleft  = max((*R1).x, (*R2).x);
    double xright = min((*R1).x+(*R1).w, (*R2).x+(*R2).w);
    double ytop = min((*R1).y, (*R2).y);
    double ybottom = max((*R1).y-(*R1).h, (*R2).y-(*R2).h);
    
    double w = xright - xleft;
    double h = ytop-ybottom;
    
    if(w > 0 && h>0){
        return w*h;
    }else {
        return 0;
    }
}