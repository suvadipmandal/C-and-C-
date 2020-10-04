//two number addition using structure
#include<stdio.h>
#include<conio.h>
struct x
{
 int n1,n2,tot;
}p;
void main()
{
 clrscr();
 printf("Enter 1st number :");
 scanf("%d",&p.n1);
 printf("Enter 2nd number :");
 scanf("%d",&p.n2);
 p.tot=p.n1+p.n2;
 printf("\nSum=%d",p.tot);
 getch();
}