#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Set fill style for green color
    setfillstyle(SOLID_FILL, GREEN);

    // Draw and fill the first circle with green color
    circle(250, 200, 100);
    floodfill(250, 200, GREEN); // Use the circle center coordinates

    // Set fill style for orange color
    setfillstyle(SOLID_FILL, YELLOW);

    // Draw and fill the second circle with orange color
    circle(200, 200, 50);
    floodfill(200, 200, YELLOW); // Use the circle center coordinates

    getch();

    closegraph();

    return 0;
}

