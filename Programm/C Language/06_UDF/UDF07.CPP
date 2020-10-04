//selection sort using udf
#include<stdio.h>
#include<conio.h>
int i,j;
void input(int no[],int n)
{
//int i;
for(i=0;i<n;++i)
{
 printf("Enter number %d :",i+1);
 scanf("%d",&no[i]);
}
}
void print(int no[],int n)
{
 //int i;
 for(i=0;i<n;++i)
 printf("%d\t",no[i]);
}
void selection_sort(int no[],int n)
{
//int i,j;
 for(i=0;i<n;++i)
  for(j=i+1;j<n;++j)
   if(no[i]>no[j])
   {
    no[i]=no[i]^no[j];
    no[j]=no[i]^no[j];
    no[i]=no[i]^no[j];
   }
  }
void main()
{
int no[10];
clrscr();
input(no,10);
selection_sort(no,10);
printf("\nSorrted list as ascending order :\n");
print(no,10);
getch();
}