//User i/o integer number
#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,tot;
clrscr();
gotoxy(10,3);
printf("Enter 1st integer :");
scanf("%d",&no1);
gotoxy(10,5);
printf("Enter 2nd integer :");
scanf("%d",&no2);
gotoxy(10,7);
tot=no1+no2;
printf("Sum=%d",tot);
getch();
}