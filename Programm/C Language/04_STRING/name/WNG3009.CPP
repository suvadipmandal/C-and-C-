#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[50],y[50];
int p;
clrscr();
printf("enter any string:");
gets(x);
strepy(y,x);
streev(y);
p=stremp(x,y);
if(p==0)
printf("%s is symetricword",x);
else
printf("%s is not a symetric word",);
getch();
}
