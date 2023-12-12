#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Devc\\BGI");

    // Draw a rectangle
    line(10, 10, 10, 400);  
    line(10, 10, 250, 10);  
    
    line(250, 10, 250, 400);  
    line(10, 400, 250, 400);  
    

    getch();
    closegraph();
    return 0;
}

