#include<stdio.h>
#include<conio.h>
void fig(void);
void main()
 {
 clrscr();
 fig();
 getch();
 }
void fig(void)
 {
 int i,j;
 for(i=1;i<=10;++i)
  {
  for(j=1;j<=i;++j)
  printf("*");
  printf("\n");
  }
 }