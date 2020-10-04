#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 struct time t;
 clrscr();
 _setcursortype(_NOCURSOR);
 while(!kbhit())
  {
  gettime(&t);
  gotoxy(20,10);
  printf("%02d:%02d:%02d   %d",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);
  }
 }