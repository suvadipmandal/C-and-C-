//fibonacci number
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,flag=0,n1=2,n2=3,n3=5;
 char ch='y';
 clrscr();
 while(ch=='y'||ch=='Y')
 {
 flag=0;
 printf("\nEnter any number  :");
 scanf("%d",&n);
 if(n>=0 && n<=3)
 flag=1;
 else
 {
 while(n3<=n)
  {
  n3=n1+n2;
  n1=n2;
  n2=n3;
  if(n3==n)
  {
  flag=1;
  break;
  }
 }
}
if(flag==1)
printf("\n%d is a fibinacci number .",n);
else
printf("\n%d is not a fibonacci number.",n);
printf("\n\n\t Try again(Y/N)? :");
ch=getche();
}
getch();
}