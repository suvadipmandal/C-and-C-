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
 rectangle(cx-100,cy-100,cx+100,cy+100);
 circle(cx,cy,99);
 setfillstyle(6,GREEN);
 floodfill(cx-98,cy-98,RED);
 getch();
 closegraph();
 }