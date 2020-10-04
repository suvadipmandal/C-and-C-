//User i/o integer number
#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2;
clrscr();
printf("Enter 1st integer :");
scanf("%2d",&no1);
fflush(stdin);
printf("Enter 2nd integer :");
scanf("%2d",&no2);
fflush(stdin);
printf("\nno1=%d\nno2=%d",no1,no2);
getch();
}