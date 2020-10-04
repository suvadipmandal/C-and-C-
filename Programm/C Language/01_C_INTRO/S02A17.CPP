//User i/o integer number
#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,tot;
clrscr();
printf("Enter 1st integer :");
scanf("%2d",&no1);
printf("Enter 2nd integer :");
scanf("%2d",&no2);
tot=no1+no2;
printf("Sum=%d",tot);
getch();
}