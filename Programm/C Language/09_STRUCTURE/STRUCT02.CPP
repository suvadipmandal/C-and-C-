//two number addition using structure
#include<stdio.h>
#include<conio.h>
struct x
{
 int n;
}p1,p2,p3;
void main()
{
  clrscr();
  printf("Enter 1st number :");
  scanf("%d",&p1.n);
  printf("Enter 2nd number :");
  scanf("%d",&p2.n);
  p3.n=p1.n+p2.n;
  printf("\nSum=%d",p3.n);
  getch();
}