#include<stdio.h>
#include<conio.h>
void main ()
  {
  float  c,f;
  clrscr();
  printf("Enter temp. in cent. :");
  scanf("%f",&c);
  f=(9*c+160)/5;
  printf("\n Equivalent temp. is far :%f",f);
  getch();
  }