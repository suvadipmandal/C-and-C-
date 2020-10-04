#include<stdio.h>
#include<conio.h>
void main()
{
int no[10],i,j,temp;
clrscr();
for(i=0;i<9;++i)
   {
   for(j=0;j<9-i;++j)
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