#include <stdio.h>
#include <graphics.h>

int main() {
    int gdriver = DETECT, gmode, error;
    
    int x0 = 0;
    int y0 = 0;
    
    int x1 = 250;
    int y1 = 250;

    initgraph(&gdriver, &gmode, "");

    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;

    while (x < x1) {
        if (p >= 0) {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        } else {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        x = x + 1;
    }

    getch();
    closegraph();
    return 0;
}

