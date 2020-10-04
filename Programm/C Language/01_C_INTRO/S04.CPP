//find two user input biggest number
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no1,no2,big;
printf("\nEnter 1st number :");
scanf("%d",&no1);
printf("\nEnter 2nd number :");
scanf("%d",&no2);
if(no1==no2)
printf("\n\n\tBoth inputed numbers are identical...");
else
{
if(no1>no2)
big=no1;
else
big=no2;
printf("\nBiggest value=%d",big);
}
getch();
}