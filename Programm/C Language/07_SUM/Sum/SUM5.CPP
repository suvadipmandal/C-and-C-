#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
 {
 int no1,no2;
 clrscr();
 printf("enter 1st number :");
 scanf("%d",&no1);
 printf("enter 2nd number :");
 scanf("%d",&no2);
 sum(no1,no2);
 getch();
 }
void sum(int no1,int no2)
 {
 int tot;
 tot=no1+no2;
 printf("\nSum=%d",tot);
 }