#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a,b,c;
a=b=c=10;
a++;
b+=8;
c--;
printf("%d",a<b?b>c?c<a:b:c);
getch();
}