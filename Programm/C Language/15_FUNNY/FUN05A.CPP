#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   char i;
   printf("Enter any single charecter from keyboard :");
   scanf("%c",&i);
   printf("\n\nASCII value of the ascii character \'%c\' is :%d",i,i);
   getch();
}