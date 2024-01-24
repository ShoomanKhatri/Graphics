#include <graphics.h>
#include <stdio.h>

void drawCircle(int a, int b, int r) {
    int x = 0, y = r, p = 3 - 2 * r;

    while (x <= y) {
        putpixel(a + x, b + y, RED);
        putpixel(a - x, b + y, RED);
        putpixel(a + x, b - y, RED);
        putpixel(a - x, b - y, RED);
        putpixel(a + y, b + x, RED);
        putpixel(a - y, b + x, RED);
        putpixel(a + y, b - x, RED);
        putpixel(a - y, b - x, RED);

        if (p < 0)
            p += 4 * x++ + 6;
        else
            p += 4 * (x++ - y--) + 10;
    }
}

int main() {
    int a = 200, b = 200, r = 50;  // Example values

    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, " ");

    drawCircle(a, b, r);

    getch();
    closegraph();
    return 0;
}

