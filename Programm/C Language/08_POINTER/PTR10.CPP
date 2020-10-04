//pointer
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
  int *p1,i;
  clrscr();
  p1=(int *)malloc(10*sizeof(int));
  for(i=0;i<10;++i)
  {
   printf("Enter no %d :",i+1);
   scanf("%d",p1+i);
  }
  printf("\nInputed Numbers :\n===================\n");
  for(i=0;i<10;++i)
   printf("%d\t",*(p1+i));
  getch();
}