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
scanf("%s",x);
l=strlen(x);
printf("Length of %s =%d",x,l);
getch();
}