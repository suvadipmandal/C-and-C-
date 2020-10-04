//pointer
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
  int *p1,*p2,*p3;
  clrscr();
  p1=(int *)malloc(2);
  p2=(int *)malloc(2);
  p3=(int *)malloc(2);
  printf("Enter 1st number :");
  scanf("%d",p1);
  printf("Enter 2nd number :");
  scanf("%d",p2);
  *p3=*p1+*p2;
  printf("\nSum=%d",*p3);
  getch();
}