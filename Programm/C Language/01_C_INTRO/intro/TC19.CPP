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
  if((i>=10&&i<=12)&&(j>=10&&j<=12))
  textcolor(YELLOW+128);
  else
  textcolor(RED);
  cprintf("%c%c%c",219,219,219);
  }
  else
  {
  textcolor(GREEN);
  cprintf("%c%c%c",176,176,176);
  }
  }
 printf("\n");
 }
 getch();
 }