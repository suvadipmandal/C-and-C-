#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 int gd=0,gm,x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 int cx=x/2;
 int cy=y/2;
 for(int i=1;i<=220;++i)
 {
 setcolor(i);
 circle(cx,cy,i+3);
 delay(10);
 }
 for(i=220;i>=1;--i)
  {
  setcolor(i-1);
  circle(cx,cy,i+3);
  delay(10);
  }
 getch();
 closegraph();
 }