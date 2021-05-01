#include <iostream>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    arc(200,200,0,130,50);
    // first two arguments are for position of center and 0 is the starting angle and 130 is the ending angle and 50 is the length of radius
    getch();
    closegraph();
    return 0;
}