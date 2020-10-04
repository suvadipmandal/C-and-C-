#include<stdio.h>
#include<conio.h>

void main()
{
char e;
int c,r;
clrscr();
textcolor(GREEN);
gotoxy(10,2);cprintf("A");gotoxy(12,2);cprintf("B");gotoxy(14,2);cprintf("C");
gotoxy(16,2);cprintf("D");gotoxy(18,2);cprintf("E");gotoxy(20,2);cprintf("F");
gotoxy(10,4);cprintf("G");gotoxy(12,4);cprintf("H");gotoxy(14,4);cprintf("I");
gotoxy(16,4);cprintf("J");gotoxy(18,4);cprintf("K");gotoxy(20,4);cprintf("L");
gotoxy(10,6);cprintf("M");gotoxy(12,6);cprintf("N");gotoxy(14,6);cprintf("O");
gotoxy(16,6);cprintf("P");gotoxy(18,6);cprintf("Q");gotoxy(20,6);cprintf("R");
gotoxy(10,8);cprintf("S");gotoxy(12,8);cprintf("T");gotoxy(14,8);cprintf("U");
gotoxy(16,8);cprintf("V");gotoxy(18,8);cprintf("W");gotoxy(20,8);cprintf("X");
gotoxy(10,10);cprintf("Y");gotoxy(12,10);cprintf("Z");gotoxy(14,10);cprintf("0");

printf("\n\nEnter any of the above character:");
scanf("%c",&e);
for(r=2;r<=10;r+=2)
{
 for(c=10;c<=20;c+=2)
if(c=='A'||'a')
{
textcolor(RED|BLINK);gotoxy(10,2);cprintf("%c",e);
}
else
{textcolor(GREEN);
}
getch();
}}