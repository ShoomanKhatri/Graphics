#include <stdio.h>
#include <graphics.h>

void RectAngle(int x, int y, int Height, int Width, int color)
{
  // Set the color based on the input
  setcolor(color);

  // Draw the four sides of the rectangle
  line(x, y, x + Width, y);        // Top side
  line(x, y, x, y + Height);      // Left side
  line(x + Width, y, x + Width, y + Height); // Right side
  line(x, y + Height, x + Width, y + Height); // Bottom side
}

void Translate(int x, int y, int Height, int Width, int color)
{
  int Newx = 50, Newy = 50; // Assigning values directly

  // Calculate the new position of the rectangle after translation
  int a = x + Newx;
  int b = y + Newy;

  // Draw the translated rectangle in the specified color
  RectAngle(a, b, Height, Width, color);
}


int main()
{
  int gd = DETECT, gm;

  // Initialize the graphics system
  initgraph(&gd, &gm, "");

  // Define colors
  int blue = BLUE;
  int red = RED;

  // Draw the original rectangle in blue
  RectAngle(100, 100, 50, 100, blue);

  // Translate the rectangle and draw it in red
  Translate(100, 100, 50, 100, red);

  getch();
  closegraph();
  return 0;
}

