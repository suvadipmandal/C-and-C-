#include<stdio.h>
#include<conio.h>

int extern x;
void main()
{
 clrscr();
 printf("%d",x);
 x=2;
 getch();
}

int x=23;