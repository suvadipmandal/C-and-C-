#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int i;
   for(i='A';i<='Z';printf("%c\t",(i%2==0)?i:i+32),++i);
   getch();
}