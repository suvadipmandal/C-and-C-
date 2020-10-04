#include<stdio.h>
#include<conio.h>
void fig(char,int,int);
void main()
 {
 char ch;
 int row,c;
 clrscr();
 printf("\nEnter the printable character :");
 scanf("%c",&ch);
 printf("How many rows? ");
 scanf("%d",&row);
 printf("enter color code : ");
 scanf("%d",&c);
 fig(ch,row,c);
 getch();
 }
void fig(char x,int r,int c)
 {
 int i,j;
 textcolor(c);
 for(i=1;i<=r;++i)
  {
  for(j=1;j<=i;++j)
  cprintf("%c",x);
  printf("\n");
  }
 }