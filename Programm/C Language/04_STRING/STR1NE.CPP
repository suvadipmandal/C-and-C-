#include<stdio.h>
#include<conio.h>
int length(char []);
void main()
{
char x[50];
int l;
clrscr();
printf("Enter any string :");
gets(x);
l=length(x);
printf("\nLength=%d",l);
getch();
}

int length(char x[])
{
 int l;
 for(l=0;x[l]!='\0';++l);
 return(l);
}