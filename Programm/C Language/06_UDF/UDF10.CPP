//1st n fibonacci numbers
#include<stdio.h>
#include<conio.h>
int fibo(int i)
{
  static int a=0,b=1,c;
  if(i==1)
  return(a);
  else
    if(i==2)
    return(b);
    else
    {
    c=a+b;
    a=b;
    b=c;
    return(c);
    }
}
void main()
{
 int i,n;
 clrscr();
 printf("\nHow many? ");
 scanf("%d",&n);
 for(i=1;i<=n;++i)
 printf("%d\t",fibo(i));
 getch();
}