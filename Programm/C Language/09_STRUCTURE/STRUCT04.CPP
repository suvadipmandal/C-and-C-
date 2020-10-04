//two number addition using structure
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
{
  int n1;
  struct y
  {
   int n2;
   struct z
   {
    int tot;
   }z1;
  }y1;
}x1;

void main()
{
  clrscr();
  printf("Enter 1st number :");
  scanf("%d",&x1.n1);
  printf("Enter 2nd number :");
  scanf("%d",&x1.y1.n2);
  x1.y1.z1.tot=x1.n1+x1.y1.n2;
  printf("\nSum of %d and %d = %d",x1.n1,x1.y1.n2,x1.y1.z1.tot);
  getch();
}