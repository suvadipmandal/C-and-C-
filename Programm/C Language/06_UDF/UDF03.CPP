//udf
#include<stdio.h>
#include<conio.h>
void sum(void);
void main()
{
 clrscr();
 sum();
 sum();
 getch();
}

void sum(void)
{
 int n1,n2,tot;
 printf("\nEnter 1st number :");
 scanf("%d",&n1);
 printf("Enter 2nd number :");
 scanf("%d",&n2);
 tot=n1+n2;
 printf("\nSum=%d",tot);
}