#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int i,gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 int cx=x/2;
 int cy=y/2;
 while(!kbhit())
 {
 putpixel(random(x),random(y),RED);
 //delay(2);
 }
 closegraph();
 }