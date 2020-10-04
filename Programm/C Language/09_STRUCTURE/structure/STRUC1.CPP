#include<stdio.h>
#include<conio.h>
struct x
 {
 int no1,no2,tot;
 }x1;
void main()
 {
 clrscr();
 printf("enter 1st number :");
 scanf("%d",&x1.no1);
 printf("enter 2nd number :");
 scanf("%d",&x1.no2);
 x1.tot=x1.no1+x1.no2;
 printf("\nSum of %d and %d is : %d",x1.no1,x1.no2,x1.tot);
 getch();
 }