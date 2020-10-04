//String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[60];
int l;
clrscr();
printf("Enter any string :");
gets(x);
l=strlen(x);
for(i=0;i<l;++i)
printf("\n%c",x[i]);
getch();
}