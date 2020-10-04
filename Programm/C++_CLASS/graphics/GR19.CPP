#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int i=1,gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 settextstyle(5,0,9);
 while(!kbhit())
 {
 setcolor(i++);
 if(i>15)i=1;
 outtextxy(200,200,"HONU");
 delay(1000);
 }
 closegraph();
 }