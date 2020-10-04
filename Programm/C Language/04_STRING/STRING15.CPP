//String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[50];
int l;
clrscr();
printf("Enter any string :");
for (l=0;(x[l]=getchar())!='\n';)
if(x[l]>=48&&x[l]<=57)
++l;
x[l]='\0';
printf("\nInputed string :%s",x);
printf("\nlength=%d",l);
getch();
}