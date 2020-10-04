//sum using udf
#include<stdio.h>
#include<conio.h>
void sum(void);
void main()
{
sum();
getch();
}
void sum(void)
{
 int no1,no2,tot;
 clrscr();
 printf("Enter 1st number :");
 scanf("%d",&no1);
 printf("Enter 2nd number :");
 scanf("%d",&no2);
 tot=no1+no2;
 printf("\nSum= %d",tot);
}