#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
 {
 int gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 int cx=x/2;
 int cy=y/2;
 setcolor(GREEN);
 circle(cx,cy,200);
 setcolor(RED);
 circle(cx,cy,198);
 setcolor(GREEN);
 circle(cx,cy,196);
 getch();
 closegraph();
 }