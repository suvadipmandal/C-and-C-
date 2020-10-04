#include<stdio.h>
#include<conio.h>
void main()
 {
 char x;
 clrscr();
 while(1)
  {
  x=getch();
  printf("\nAscii value=%d",x);
  if(x==13)break;
}  }