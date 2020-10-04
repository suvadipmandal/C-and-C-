#include<stdio.h>
#include<conio.h>
#define square(x) x*x

void main()
{
 clrscr();
 char x[]="hello hi";
 printf("%d%d",sizeof(*x),sizeof(x));
 getch();
}