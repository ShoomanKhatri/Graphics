#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;

    printf("Enter coordinates of line (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, "");

    setcolor(RED);
    line(x1, y1, x2, y2); // Drawing original line

    // Reflecting the line
    int x1_reflected = x1;
    int y1_reflected = -y1;
    int x2_reflected = x2;
    int y2_reflected = -y2;

    setcolor(GREEN);
    line(x1_reflected, y1_reflected, x2_reflected, y2_reflected); // Drawing reflected line

    getch();
    closegraph();

    return 0;
}

