//two number addition using structure
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct z
{
 int n;
};
struct y
{
 int n;
 struct z z1;
};
struct x
{
 int n;
 struct y y1;
};
void main()
{
  struct x x1;
  clrscr();
  printf("Enter 1st number :");
  scanf("%d",&x1.n);
  printf("Enter 2nd number :");
  scanf("%d",&x1.y1.n);
  x1.y1.z1.n=x1.n+x1.y1.n;
  printf("\nSum of %d and %d = %d",x1.n,x1.y1.n,x1.y1.z1.n);
  getch();
}