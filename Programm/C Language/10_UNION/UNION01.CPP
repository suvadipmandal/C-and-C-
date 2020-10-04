#include<stdio.h>
#include<conio.h>
union x
{
 int no1,no2,no3;
}x1;
void main()
{
 clrscr();
 printf("Enter 1st number :");
 scanf("%d",&x1.no1);
 printf("Enter 2nd number :");
 scanf("%d",&x1.no2);
 x1.no3=x1.no1+x1.no2;
 printf("\nSum of %d and %d is : %d",x1.no1,x1.no2,x1.no3);
 getch();
}