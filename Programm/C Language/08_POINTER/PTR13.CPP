//arrange n number as ascending order without an array
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
  int *p1,i,j,temp,n;
  clrscr();
  printf("\nHow many numbers?  :");
  scanf("%d",&n);
  p1=(int *)malloc(n*sizeof(int));
  if(p1==NULL)
  {
    printf("\nUnable to allocation memory.....");
    getch();
    exit(1);
  }
  for(i=0;i<n;++i)
  {
    printf("Enter no %d :",i+1);
    scanf("%d",p1+i);
  }
  for(i=0;i<n;++i)
  {
   for(j=i+1;j<n;++j)
   {
    if(*(p1+i)>*(p1+j))
    {
    temp=*(p1+i);
    *(p1+i)=*(p1+j);
    *(p1+j)=temp;
    }
  }
}

printf("\nSorted Numbers:\n=======================\n");
for(i=0;i<n;++i)
 printf("%d\t",*(p1+i));
getch();
}