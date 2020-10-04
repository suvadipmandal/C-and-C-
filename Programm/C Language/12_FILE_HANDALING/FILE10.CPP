//rewind function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 FILE *tmp;

 char name[L_tmpnam+1];

 tmpnam(name);
 puts(name);
 getch();
}