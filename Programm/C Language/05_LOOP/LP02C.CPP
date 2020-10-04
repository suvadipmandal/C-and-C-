// 1 2 3 4 ... N (the value of N will be supplied at run time)
//============================================================
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter any range :");
 scanf("%d",&n);
 if(n<=0)
 printf("\n\n\tInvalid range....");
 else
 {
 for(i=1;i<=n;++i)
 {
 printf("%3d\t",i);
 }
}
 getch();
}