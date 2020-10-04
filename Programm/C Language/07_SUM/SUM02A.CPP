//sum
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n1,n2,tot;
 printf("Enter 1st number :");
 scanf("%u",&n1);
 printf("Enter 2nd number :");
 scanf("%u",&n2);
 if(n1<0)
 printf("\n1st inputed number is -ve or out of bound...");
 else
 {
 if(n2<0)
 printf("\n2nd inputed number is -ve or out of bound...");
 else
 {
 tot=n1+n2;
 printf("\nSum of %u and %u is : %u",n1,n2,tot);
 }
 }
 getch();
}