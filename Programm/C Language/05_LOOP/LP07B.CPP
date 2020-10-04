//palindrom number
#include<stdio.h>
#include<conio.h>
void main()
{
 int n1=0,n2=1,n3=2,n,i;
 clrscr();
 printf("\nHow many ?");
 scanf("%d",&n);
 for(i=1;n3<=n;++i)
 {
 if(i<=2)
 printf("%d\t",n2);
 else
  {
  n3=n1+n2;
  n1=n2;
  n2=n3;
  printf("%d\t",n3);
  }
 }
 getch();
}