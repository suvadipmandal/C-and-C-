//String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[40],rname[40];
int x;
clrscr();
printf("Name of the student :");
gets(name);
strcpy(rname,name);
strrev(rname);
printf("\nName as reverse order :%s",rname);
x=strcmp(name,rname);
if(x==0)
printf("\n%s is symetric word...",name);
else
printf("\n%s is not a symetric word...",name);
getch();
}