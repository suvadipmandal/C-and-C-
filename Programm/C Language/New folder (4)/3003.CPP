#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("enter any no:");
scanf("%d",& no);
if(no>=0)
printf("\n%d is +ve no",no);
else
printf("\n%d is -ve no",no);
getch();
}