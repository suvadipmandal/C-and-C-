#include<stdio.h>
#include<conio.h>
void main()
 {
 char x='a';
 char y;
 clrscr();
 if(x>=97 && x<=122)
 y=x-32;
 printf("\nx=%c\ny=%c",x,y);
 getch();
 }