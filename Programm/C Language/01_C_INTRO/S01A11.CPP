//print any color message with blanking using gotoxy function
//Alternative program
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
textcolor(RED+128);
gotoxy(30,10);
cprintf("hatavaga indian");
getch();
}