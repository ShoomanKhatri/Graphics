#include<graphics.h>

int main(){


int gd =DETECT, gm;

initgraph	(&gd,&gm,"c:\\DevC\\arc");


//   arc(x, y, start_angle, end_angle, radius);
setcolor(GREEN);

   arc(200,200,0,180,50);
   
   getch();
   closegraph();   
   
   return 0;
   

}
