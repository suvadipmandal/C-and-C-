//String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[40];
int l;
clrscr();
printf("Name of the student :");
gets(name);
l=strlen(name);
printf("\nLength of \"%s\" = %d",name,l);
getch();
}