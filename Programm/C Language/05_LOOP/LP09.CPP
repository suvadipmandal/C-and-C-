//fibonacci number
#include<stdio.h>
#include<conio.h>
void main()
{
 int no;
 char ch='y';
 while(ch=='y'||ch=='Y')
 {
 clrscr();
 printf("Enter any number :");
 scanf("%d",&no);
 if(no<0)
 printf("\nYour inputed number is -ve ...");
 else
 {
 if(no%2==0)
 printf("%d is an even number. ",no);
 else
 printf("%d is an odd number.",no);
 }
 printf("\n\n\nTry aganin(Y/N)? :");
 ch=getche();
 }
 getch();
}