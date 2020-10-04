//print any color message with blanking using gotoxy function
//Textbackground change
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
textcolor(128);
textbackground(3);
gotoxy(30,10);
cprintf("hatavaga indian");
getch();
}