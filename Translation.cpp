#include<stdio.h>
#include<graphics.h>

void RectAngle(int x, int y, int Height, int Width);
void Translate(int x, int y, int Height, int Width);

int main()
{
    int gd = DETECT, gm;
    int x, y, Height, Width;

    // Initialize the graphics system
    initgraph(&gd, &gm, "");

    printf("Enter the First point for the Rectangle:");
    scanf("%d%d", &x, &y);

    printf("Enter the Height & Width for the Rectangle:");
    scanf("%d%d", &Height, &Width);

    // Draw the original rectangle
    RectAngle(x, y, Height, Width);

    // Translate the rectangle
    Translate(x, y, Height, Width);

    getch();
    closegraph();
    return 0;
}

void RectAngle(int x, int y, int Height, int Width)
{
    // Draw the four sides of the rectangle
    line(x, y, x + Width, y);                  // Top side
    line(x, y, x, y + Height);                 // Left side
    line(x + Width, y, x + Width, y + Height); // Right side
    line(x, y + Height, x + Width, y + Height);// Bottom side
}

void Translate(int x, int y, int Height, int Width)
{
    int Newx, Newy, a, b;

    printf("Enter the Translation coordinates:");
    scanf("%d%d", &Newx, &Newy);

    // Calculate the new position of the rectangle after translation
    a = x + Newx;
    b = y + Newy;

    // Draw the translated rectangle
    RectAngle(a, b, Height, Width);
}

