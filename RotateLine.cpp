#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    double angle = 60.0;     // Angle of rotation (in degrees)
    int x1 = 100, y1 = 100; // Starting point of the line
    int x2 = 300, y2 = 100; // Ending point of the line

    initgraph(&gd, &gm, "");

    setcolor(RED);
    line(x1, y1, x2, y2); // Original line

    // Convert angle to radians
    double radians = angle * M_PI / 180.0;

    // Perform rotation
    int x1_new = x1 * cos(radians) - y1 * sin(radians);
    int y1_new = x1 * sin(radians) + y1 * cos(radians);
    int x2_new = x2 * cos(radians) - y2 * sin(radians);
    int y2_new = x2 * sin(radians) + y2 * cos(radians);

    setcolor(GREEN);
    line(x1_new, y1_new, x2_new, y2_new); // Rotated line

    getch();
    closegraph();



    return 0;
}

