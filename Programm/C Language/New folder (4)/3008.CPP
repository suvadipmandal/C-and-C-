#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
char x[50];
clrscr();
printf("Enter any string:");
gets(x);
strrev(x);
printf("\v Reversed input string :%s",x);
getch();
}