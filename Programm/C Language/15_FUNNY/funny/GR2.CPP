#include<graphics.h>
#include<conio.h>
void main()
   {
   int gd=0,gm;
   initgraph(&gd,&gm,"..\\bgi");
   setcolor(YELLOW);
   rectangle(10,10,200,200);
   line(10,10,200,200);
   line(200,10,10,200);
   setfillstyle(1,RED);
   floodfill(100,20,YELLOW);
   setfillstyle(11,GREEN);
   floodfill(100,150,YELLOW);
   getch();
   closegraph();
   }