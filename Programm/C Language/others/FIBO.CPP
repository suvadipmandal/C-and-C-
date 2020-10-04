#include<stdio.h>
#include<conio.h>
int fibo(int i)
 {
 if(i<=2)
 return(1);
 else
 return(fibo(i-1)+fibo(i-2));
 }
void main()
 {
 int i,n;
 clrscr();
 printf("enter any range :");
 scanf("%d",&n);
 for(i=1;i<=n;++i)
 printf("%d\t",fibo(i));
 getch();
 }