//m m+1 m+2 ... n
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,m,n;
 clrscr();
 printf("Enter the start value :");
 scanf("%d",&m);
 printf("Enter the stop value :");
 scanf("%d",&n);
 for(i=m;i<=n;++i)
 {
  printf("%d\t",i);
 }
 getch();
}