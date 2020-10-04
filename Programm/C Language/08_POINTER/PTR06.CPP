//pointer
#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,*p1,*p2,*p3,sum;
  clrscr();
  p1=&n1;
  p2=&n2;
  p3=&sum;
  printf("Enter 1st number :");
  scanf("%d",p1);
  printf("Enter 2nd number :");
  scanf("%d",p2);
  *p3=*p1+*p2;
  printf("\nSum=%d",*p3);
  getch();
}