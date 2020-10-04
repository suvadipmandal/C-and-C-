#include<stdio.h>
#include<conio.h>
void fig(char);
void main()
 {
 char ch;
 clrscr();
 printf("\nEnter the printable character :");
 scanf("%c",&ch);
 fig(ch);
 getch();
 }
void fig(char x)
 {
 int i,j;
 for(i=1;i<=10;++i)
  {
  for(j=1;j<=i;++j)
  printf("%c",x);
  printf("\n");
  }
 }