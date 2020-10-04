#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int y[4]={6,7,8,9};
 int *ptr = y+2;
 printf("%d\n",ptr[1]);
 getch();
}