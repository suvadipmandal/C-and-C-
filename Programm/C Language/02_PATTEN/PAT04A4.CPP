//ractanglefa patten
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=21;++i)
{
for(j=1;j<=21;++j)
{
if(i==1||i==21||j==1||j==21||i+j==22)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}