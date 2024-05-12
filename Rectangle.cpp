#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Devc\\MinGW64");

    // Draw a rectangle
    line(10, 10, 10, 400);  
    line(10, 10, 350, 10);  
  
    line(350, 10, 350, 400);  
    line(10, 400, 350, 10);  
    

    getch();
    closegraph();
    return 0;
}

