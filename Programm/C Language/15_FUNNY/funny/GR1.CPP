#include<graphics.h>
#include<conio.h>
void main()
   {
   int gd=0,gm;
   initgraph(&gd,&gm,"..\\bgi");
   setfillstyle(1,6);
   setcolor(RED);
   circle(240,200,100);
   floodfill(240,200 RED);
   getch();
   closegraph();
   }