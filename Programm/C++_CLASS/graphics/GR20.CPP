#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int i=1,gd=0,gm,x=1,y;
 initgraph(&gd,&gm,"..\\bgi");
 settextstyle(5,0,9);
 while(!kbhit())
 {
 settextstyle(x,0,9);
 setcolor(i++);
 if(i>15){i=1;cleardevice();++x;if(x>7){x=1;cleardevice();}}
 outtextxy(200,200,"HONU");
 delay(1000);
 }
 closegraph();
 }