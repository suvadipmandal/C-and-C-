#include<stdio.h>
#include<conio.h>
void main()
{
int no,*p;
clrscr();
p=&no;
printf("enter any no:");
scanf("%d",&*p);
getch();
}