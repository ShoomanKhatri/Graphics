#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Devc\\BGI");

    // Draw a triangle
    line(10, 10, 250, 400);   // Line from (10,10) to (250,400)
    line(250, 400, 500, 10);  // Line from (250,400) to (500,10)
    line(500, 10, 10, 10);    // Line from (500,10) to (10,10)

    getch();
    closegraph();
    return 0;
}

