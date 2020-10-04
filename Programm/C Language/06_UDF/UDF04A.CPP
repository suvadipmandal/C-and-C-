//calls by referece/address
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
 {
 *x=*x+*y;
 *y=*x-*y;
 *x=*x-*y;
 printf("\nx=%d\ty=%d",*x,*y);
 }

 void main()
  {
  int x,y;
  clrscr();
  printf("\nEnter any two integers :");
  scanf("%d%d",&x,&y);
  printf("\nBefore swapping : x=%d\ty=%d",x,y);
  swap(&x,&y);//calls by value
  printf("\nAfter swapping : x=%d\ty=%d",x,y);
  getch();
  }
