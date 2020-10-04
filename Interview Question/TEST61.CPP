#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a=10,b=2,c;
 a=!(c=c==c)&&++b;
 c+=(a+b--);
 printf("%d %d %d",b,c,a);
 getch();
}