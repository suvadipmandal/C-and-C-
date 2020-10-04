#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 int i;
 clrscr();
 while(!kbhit())
 {
 for(i=300;i<=1200;i+=20)
  {
  sound(i);
  delay(10);
  nosound();
  }
 for(i=1180;i>=300;i-=20)
  {
  sound(i);
  delay(10);
  nosound();
  }
 }
 }
