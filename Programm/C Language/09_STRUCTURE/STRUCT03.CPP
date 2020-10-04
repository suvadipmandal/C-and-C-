//two number addition using structure
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
{
 int n1,n2,tot;
 struct x *next;
}*p;
void main()
{
  clrscr();
  p=(struct x*)malloc(sizeof(struct x));
  printf("Enter 1st number :");
  scanf("%d",&p->n1);
  printf("Enter 2nd number :");
  scanf("%d",&p->n2);
  p->tot=p->n1+p->n2;
  printf("\nSum of %d and %d = %d",p->n1,p->n2,p->tot);
  getch();
}