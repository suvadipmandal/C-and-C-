//bubble sort using udf
#include<stdio.h>
#include<conio.h>
void input(int no[],int n)
{
 int i;
 for(i=0;i<n;++i)
 {
  printf("Enter number %d :",i+1);
  scanf("%d",&no[i]);
 }
}
void print(int no[],int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("%d\t",no[i]);
}
void bubble_sort(int no[],int n)
{
 int i,j;
 for(i=0;i<n;++i)
 for(j=0;j<n-1-i;++j)
  if(no[j]>no[j+1])
  {
   no[j]=no[j]^no[j+1];
   no[j+1]=no[j]^no[j+1];
   no[j]=no[j]^no[j+1];
  }
 }
void main()
{
 int no[10];
 clrscr();
 input(no,10);
 bubble_sort(no,10);
 printf("\nSorted list as ascending order :\n");
 print(no,10);
 getch();
}