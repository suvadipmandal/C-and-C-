#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
 {
 int gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 circle(x/2,y/2,200);
 getch();
 closegraph();
 }