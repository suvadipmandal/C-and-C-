#include<stdio.h>
#include<conio.h>
#include<math.h>
int mul(void);
void main()
  {
  int tot;
  tot=mul();
  printf("\n mul=%d",tot);
  getch();
  }
int mul(void)
  {
  int no1,no2,tot;
  clrscr();
  printf("enter 1st number:");
  scanf("%d",&no1);
  printf("enter 2nd number:");
  scanf("%d",&no2);
  tot=no1*no2;
  return(tot);
  }

