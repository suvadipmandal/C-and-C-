#include<dos.h>
#include<conio.h>
#include<stdio.h>
void main()
 {
 int x=0;
 struct time t;
 clrscr();
 _setcursortype(_NOCURSOR);
 while(!kbhit())
 {
 gettime(&t);
 if(t.ti_hour>12)
  {
  x=1;
  t.ti_hour-=12;
  }
 gotoxy(30,20);
 printf("%02d:%02d:%02d   %03d",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);
 if(x==0)
 printf("  A.M.");
 else
 printf("   P.M.");
 }
 }