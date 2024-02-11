#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    double angle;
    int x1, y1, x2, y2;

    printf("Enter coordinates of line (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Enter rotation angle: ");
    scanf("%lf", &angle);

    initgraph(&gd, &gm, "");

    setcolor(RED);
    line(x1, y1, x2, y2);

    // Convert angle to radians
    double radians = angle * M_PI / 180.0;

    // Perform rotation
    int x1_new = x1 * cos(radians) - y1 * sin(radians);
    int y1_new = x1 * sin(radians) + y1 * cos(radians);
    int x2_new = x2 * cos(radians) - y2 * sin(radians);
    int y2_new = x2 * sin(radians) + y2 * cos(radians);

    setcolor(GREEN);
    line(x1_new, y1_new, x2_new, y2_new);

    getch();
    closegraph();

    return 0;
}

