
#include <graphics.h> 
  
int main() 
{ 
   
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
  
   rectangle(125,115,215,165);  
    circle(250, 200, 100); 
    circle(400,200,50);
    getch(); 

    closegraph(); 
  
    return 0; 
} 
