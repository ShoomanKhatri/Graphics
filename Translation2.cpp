#include<stdio.h>
#include<graphics.h>

void drawLine(int x1, int y1, int x2, int y2, int color)
{
    setcolor(color);
    line(x1, y1, x2, y2);
}

void translateLine(int *x1, int *y1, int *x2, int *y2, int tx, int ty)
{
    // Translate the endpoints of the line by adding the translation values
    *x1 += tx;
    *y1 += ty;
    *x2 += tx;
    *y2 += ty;
}

int main()
{
    int gd = DETECT, gm;
    int x1 = 100, y1 = 100; // Starting point of the line
    int x2 = 300, y2 = 200; // Ending point of the line
    int tx = 50, ty = 50;   // Translation vectors

    initgraph(&gd, &gm, "");

    // Draw the original line
    drawLine(x1, y1, x2, y2, RED);

    // Translate the line
    translateLine(&x1, &y1, &x2, &y2, tx, ty);

    // Draw the translated line
    drawLine(x1, y1, x2, y2, GREEN);

    getch();
    closegraph();

    return 0;
}

