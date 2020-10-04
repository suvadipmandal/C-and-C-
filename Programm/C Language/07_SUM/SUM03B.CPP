//sum using udf
#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
 int no1,no2,tot;
 clrscr();
 printf("Enter 1st number :");
 scanf("%d",&no1);
 printf("Enter 2nd number :");
 scanf("%d",&no2);
 tot=sum(sum(no1,no2),100);
 printf("\nSum=%d",tot);
 getch();
}

int sum(int no1,int no2)
{
 return(no1+no2);
}