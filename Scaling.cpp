#include <stdio.h>
#include <graphics.h>

void scaleRectangle(int x[], int y[], int scaleX, int scaleY) {
    // Drawing original rectangle
    setcolor(RED);
    rectangle(x[0], y[0], x[1], y[1]);

    // Scaling the rectangle
    x[0] *= scaleX;
    x[1] *= scaleX;
    y[0] *= scaleY;
    y[1] *= scaleY;

    // Drawing scaled rectangle
    setcolor(GREEN);
    rectangle(x[0], y[0], x[1], y[1]);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x[2] = {100, 200}; // Coordinates of top-left and bottom-right points of the rectangle
    int y[2] = {100, 200};
    int scaleX = 2; // Scaling factors
    int scaleY = 2;

    // Draw original rectangle
    rectangle(x[0], y[0], x[1], y[1]);

    // Scale and draw the rectangle
    scaleRectangle(x, y, scaleX, scaleY);

    getch();
    closegraph();

    return 0;
}

