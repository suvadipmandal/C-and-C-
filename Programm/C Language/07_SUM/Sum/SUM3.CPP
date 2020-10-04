#include<stdio.h>
#include<conio.h>
int sum(void);
void main()
 {
 int tot;
 tot=sum();
 printf("\nSum=%d",tot);
 getch();
 }
int sum(void)
 {
 int no1,no2,tot;
 clrscr();
 printf("enter 1st number :");
 scanf("%d",&no1);
 printf("enter 2nd number :");
 scanf("%d",&no2);
 tot=no1+no2;
 return(tot);
 }