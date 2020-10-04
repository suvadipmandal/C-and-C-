//pointer
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
  int *p1,i,n;
  clrscr();
  printf("\nHow many numbers ? ");
  scanf("%d",&n);
  p1=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;++i)
  {
   printf("Enter no %d :",i+1);
   scanf("%d",p1+i);
  }
printf("\nInputed Numbers :\n====================\n");
for(i=0;i<n;++i)
 printf("%d\t",*(p1+i));
getch();
}