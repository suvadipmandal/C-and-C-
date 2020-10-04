#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int i=1,gd=0,gm,x=1,y;
 initgraph(&gd,&gm,"..\\bgi");
 while(!kbhit())
 {
 settextstyle(random(7),0,random(12));
 setcolor(random(15));
 outtextxy(random(getmaxx()),random(getmaxy()),"HONU");
 delay(1);
 }
 closegraph();
 }