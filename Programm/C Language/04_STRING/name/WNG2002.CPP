#include<stdio.h>
#include<conio.h>
void main()
{
int no[10],i,j,temp;
clrscr();
for(i=0;i<10;++i)
  {
  printf("Enter no %d:",i+1);
  scanf("%d",& no[i]);
  }
for(i=0;i<9;++i)
 {
 (j=0;j<
 9-i;++i)
    {
    if(no[j]> no[j+1])
	 {
	 temp=no[j];
	 no[j]=no[j+1];
	 no[j+1]=temp;
	 }
    }
 }
}