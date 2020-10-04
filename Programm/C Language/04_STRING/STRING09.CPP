//String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[60];
int c=0,i,l;
clrscr();
printf("Enter any string:");
gets(x);
l=strlen(x);
for(i=0;i<l;++i)
if(x[i]>='0'&& x[i]<='9')
c++;
printf("Number of Numeric digits :%d",c);
getch();
}