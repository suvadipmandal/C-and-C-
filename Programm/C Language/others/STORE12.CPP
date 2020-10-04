#include<stdio.h>
#include<conio.h>
void main()
{
int no[10],*p,i;
clrscr();
p=&no[0];
for(i=0;i<10;++i)
 {
 printf("Enter no %d:",i+1);
 scanf("%d",p);
 ++p;
 }
p=&no[0];
printf("\n Inputed nos:\n");
for(i=0;i<10;++i)
   {
   printf("%d\t",&p);
   ++i;
   }
getch();
}