//100 98 96 ... 1
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the value of n :");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {
 if(i%2==1)
 printf("%d\t",i);
 }
getch();
}