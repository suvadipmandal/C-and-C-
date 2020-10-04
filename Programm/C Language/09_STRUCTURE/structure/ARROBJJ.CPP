#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct xx
 {
 int no;
 }x[50];
void main()
 {
 int i,j;
 clrscr();
 for(i=0;i<50;++i)
  {
  printf("enter number%d :",i+1);
  scanf("%d",&x[i].no);
  }
 for(i=0;i<50;++i)
  for(j=i+1;j<50;++j)
   if(x[i].no>x[j].no)
    {
    x[i].no=x[i].no^x[j].no;
    x[j].no=x[i].no^x[j].no;
    x[i].no=x[i].no^x[j].no;
    }
 printf("\nSorted list :\n");
 for(i=0;i<50;++i)
 printf("%d\t",x[i].no);
 getch();
 }
