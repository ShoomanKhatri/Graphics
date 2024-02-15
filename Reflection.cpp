#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int x1 = 100, y1 = 100; // Starting point of the line
    int x2 = 300, y2 = 200; // Ending point of the line

    initgraph(&gd, &gm, "");

    setcolor(RED);
    line(x1, y1, x2, y2); // Drawing original line

    // Get the height of the screen
    int screenHeight = getmaxy();

    // Reflecting the line about the x-axis
    int x1_reflected = x1;
    int y1_reflected = screenHeight - y1; // Reflecting y-coordinate about x-axis
    int x2_reflected = x2;
    int y2_reflected = screenHeight - y2; // Reflecting y-coordinate about x-axis

    setcolor(GREEN);
    line(x1_reflected, y1_reflected, x2_reflected, y2_reflected); // Drawing reflected line

    getch();
    closegraph();

    return 0;
}

