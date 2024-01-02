#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=	DETECT,gm;
	initgraph(&gd, &gm, "c:\\DevC\\MinGW64");
	line(10,10,500,10);
	getch();
	closegraph();
	return 0;
	
}
