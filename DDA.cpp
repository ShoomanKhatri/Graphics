#include<stdio.h>
#include<graphics.h>
#include <math.h>


// length = steps.

 void drawLineDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int length = abs(dx) >abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = (float)dx / length;   //(float) is used for typecasting.
    float yIncrement = (float)dy / length;

    float x = x1, y = y1;

    putpixel(round(x), round(y), WHITE);

    for (int i = 1; i <= length; i++) {
        x += xIncrement;
        y += yIncrement;
        putpixel(round(x), round(y), WHITE);
    }
}


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1=50;
    int y1=50;
    
    int x2=250;
    int y2=250;


  //    int x1,y1,x2,y2;
//    printf("Enter the coordinates of the first point (x1 y1): ");
//    scanf("%d %d", &x1, &y1);
//
//    printf("Enter the coordinates of the second point (x2 y2): ");
//    scanf("%d %d", &x2, &y2);

    drawLineDDA(x1, y1, x2, y2);

    getch();
    closegraph();

    return 0;
}
 

