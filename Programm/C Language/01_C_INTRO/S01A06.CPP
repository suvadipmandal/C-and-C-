//print any message using gotoxy function cursor fix
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
_setcursortype(_NOCURSOR);
gotoxy(20,7);
printf("Indian");
gotoxy(20,5);
printf("hatavaga");
getch();
}