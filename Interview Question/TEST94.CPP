#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int y=1,x=0;
 int l=(y++,x++)?y:x;
 printf("%d\n",l);
 getch();
}