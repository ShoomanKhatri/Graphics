#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 main()
{
	int gd=	DETECT,gm;
	initgraph(&gd, &gm, "c:\\DevC\\BGI");
	line(10,10,500,10);
	getch();
	closegraph();
	return 0;
	
}
