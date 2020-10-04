#include<stdio.h>
#include<conio.h>
struct  x
   {
   int no1,no2,tot;
   }x1;
 void main()
 {
 clrscr();
 printf("Enter 1st no:");
 scanf("%d",& x1.no1);
 printf("Enter 2nd no:");
 scanf("%d",&x1.no2);
 x1.tot=x1.no1+x1.no2;
 printf("\n sum of %d and %d=%d",x1.no1,x1.no2,x1.tot);
 getch();
 }