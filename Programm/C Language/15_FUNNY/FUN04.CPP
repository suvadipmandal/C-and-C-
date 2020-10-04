#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int i;
   printf("Enter any single charecter from keyboard :");
   i=getch();
   printf("\n\nASCII value of the ascii character \'%c\' is :%d",i,i);
   getch();
}