#include<stdio.h>
#include<conio.h>

void func()
{
 int x=0;
 static int y=0;
 x++;
 y++;
 printf("%d---%d\n",x,y);
}

void main()
{
 clrscr();
 func();
 func();
 getch();
}