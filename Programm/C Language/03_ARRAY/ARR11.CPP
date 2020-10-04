//Array in c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int no[2][5],i,j;
 clrscr();
 for(i=0;i<2;++i)
 {
  for(j=0;j<5;++j)
  {
  printf("Enter number at location %d,%d :",i,j);
  scanf("%d",&no[i][j]);
  }
 }
 printf("\nInputed numbers :\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 for(i=0;i<2;++i)
 {
  for(j=0;j<5;++j)
  {
  printf("|%5d |",no[i][j]);
  }
 printf("\n");
 }
getch();
}