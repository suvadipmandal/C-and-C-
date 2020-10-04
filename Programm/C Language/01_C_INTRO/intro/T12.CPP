#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 int n1,n2,tot;
 struct time t;
 clrscr();
 printf("enter 1st number :");
 scanf("%d",&n1);
 printf("enter 2nd number :");
 scanf("%d",&n2);
 tot=n1+n2;
 _setcursortype(_NOCURSOR);
 while(!kbhit())
 {
 gotoxy(20,10);
 gettime(&t);
 if(t.ti_sec/16!=0)
 textcolor(t.ti_sec);
 cprintf("sum of %d and %d is : %d",n1,n2,tot);
 } }