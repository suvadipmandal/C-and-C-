//fibonacci number
#include<stdio.h>
#include<conio.h>
void main()
{
 int no;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&no);
 if(no%2==0)
 printf("%d is an even number. ",no);
 else
 printf("%d is an odd number.",no);
 getch();
}