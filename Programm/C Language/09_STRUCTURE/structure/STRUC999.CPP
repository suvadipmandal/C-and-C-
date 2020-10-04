#include<stdio.h>
#include<conio.h>
struct x
{
int no;
}x1,x2,x3;
void main()
    {
    clrscr();
    printf("Enter 1st no:");
    scanf("%d",&x1.no);
    printf("Enter 2nd no:");
    scanf("%d",&x2.no);
    x3.no=x1.no+x2.no;
    printf("\n sum of %d and %is:%d",x1.no,x2.no,x3.no);
getch();
}