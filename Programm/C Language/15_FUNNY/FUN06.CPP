#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   char x;
   clrscr();
   while(1)
   {
    x=getch();
    sound(x*12);
    delay(500);
    nosound();
    if(x='x')
    break;
   }
}