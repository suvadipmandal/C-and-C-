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
 setcolor(random(15));
 circle(random(getmaxx()),random(getmaxy()),random(100));
// rectangle(random(600),random(400),random(620),random(440));
 delay(10);
 }
 closegraph();
 }