#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Devc\\BGI");

    
    line(10, 10, 10, 400);  
    line(10, 10, 250, 10);  
    
    line(250, 10, 250, 400);  
    line(10, 400, 250, 400);  
    
    //cross lines
    line(10, 10, 250, 400);
    line(10, 400, 250, 10);

//plus 
line(10, 200, 250, 200);
line(130, 10, 130, 400);
    getch();
    closegraph();
    return 0;
}

