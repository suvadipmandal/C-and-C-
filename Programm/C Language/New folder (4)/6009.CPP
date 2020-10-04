#include<stdio.h>
#include<conio.h>
void main ()
{
int no,r;
clrscr();
printf("Enter any no :");
scanf("%",&no);
r=no%2;
if(r==0)
printf("\n%d is even no ");
else
   printf("\n%d is odd no.",no);
getch();
}