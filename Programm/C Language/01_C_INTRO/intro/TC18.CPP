#include<stdio.h>
#include<conio.h>
void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=21;++i)
 {
 for(j=1;j<=21;++j)
  {
  if(i==1||i==21||j==1||j==21||i==j||i+j==22||j==11||i==11)
  {
  textcolor(RED);
  cprintf("%c",219);
  }
  else
  {
  textcolor(GREEN);
  cprintf("%c",3);
  }
  }
 printf("\n");
 }
 getch();
 }