//sum
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 unsigned int n1,n2,tot;
 printf("Enter 1st number :");
 scanf("%u",&n1);
 printf("Enter 2nd number :");
 scanf("%u",&n2);
 tot=n1+n2;
 printf("\nSum of %u and %u is : %u",n1,n2,tot);
 getch();
}