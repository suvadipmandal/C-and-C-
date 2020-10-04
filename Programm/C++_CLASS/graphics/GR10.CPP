#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 int i,gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 int cx=x/2;
 int cy=y/2;
 setcolor(RED);
 circle(cx,cy,100);
 line(cx-99,cy,cx+99,cy);
 setfillstyle(1,GREEN);
 floodfill(cx,cy,RED);
 getch();
 }