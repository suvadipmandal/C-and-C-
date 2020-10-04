//100 98 96 ... 1
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,m,n;
 clrscr();
 printf("Enter the start value :");
 scanf("%d",&m);
 printf("Enter the stop valur :");
 scanf("%d",&n);
 if(m>n)
 {
 m=m+n;
 n=m-n;
 m=m-n;
 }
 for(i=m;i<=n;++i)
 {
 if(i%2==0)
 printf("%d\t",i);
 }
 getch();
}