#include<stdio.h>
#include<conio.h>
void main()
{
int no[10],*p,i;
clrscr();
p=&no[0];
printf("\n inputed nos:\n");
for(i=0;i<10;++i)
   {
   printf("%d\t",*p);
   ++p;
   }
getch();
}