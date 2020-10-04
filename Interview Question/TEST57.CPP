#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
clrscr();
int a[]={6,2,8,4,9},*p,n;
p=a+2;
n=*p;
printf("\nOutput1:%d",n);
n=*++p;
printf("\nOutput2:%d",n);
n=*(--p);
printf("\nOutput3:%d",n);
n=*p--;
printf("\nOutput4:%d",n);
n=(*p)++;
printf("\nOutput5:%d",n);
n=++(*p);
printf("\nOutput6:%d",n);
n=--*p;
printf("\nOutput7:%d",n);
n=*(++p);
printf("\nOutput8:%d",n);
getch();
}