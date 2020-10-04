#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
{
 int no;
}*x1,*x2,*x3;
void main()
{
 clrscr();
 x1=(struct x*)malloc(sizeof(struct x));
 x2=(struct x*)malloc(sizeof(struct x));
 x3=(struct x*)malloc(sizeof(struct x));
 printf("Enter 1st number :");
 scanf("%d",&x1->no);
 printf("Enter 2nd number :");
 scanf("%d",&x2->no);
 x3->no=(x1->no+x2->no);
 printf("\nSum of %d and %d is : %d",x1->no,x2->no,x3->no);
 getch();
}