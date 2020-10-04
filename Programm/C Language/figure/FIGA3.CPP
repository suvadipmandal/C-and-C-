#include<stdio.h>
#include<conio.h>
void fig(char,int);
void main()
 {
 char ch;
 int row;
 clrscr();
 printf("\nEnter the printable character :");
 scanf("%c",&ch);
 printf("How many rows? ");
 scanf("%d",&row);
 fig(ch,row);
 getch();
 }
void fig(char x,int r)
 {
 int i,j;
 for(i=1;i<=r;++i)
  {
  for(j=1;j<=i;++j)
  printf("%c",x);
  printf("\n");
  }
 }