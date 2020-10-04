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
 rectangle(cx-50,cy-50,cx+50,cy+50);
 line(cx-100,cy-100,cx-50,cy-50);
 line(cx-100,cy+100,cx-50,cy+50);
 line(cx+100,cy-100,cx+50,cy-50);
 line(cx+100,cy+100,cx+50,cy+50);
 getch();
 closegraph();
 }