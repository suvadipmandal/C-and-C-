#include<stdio.h>
#include<conio.h>
void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=10;++i)
 {
 for(j=1;j<=i;++j)
  {
  if(i==10 || j==1 ||i==j)
  printf("*");
  else
  printf(" ");
  }
 printf("\n");
 }
 getch();
 }