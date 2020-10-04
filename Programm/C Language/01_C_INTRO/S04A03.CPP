//find two user input biggest number
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no1,no2,big;
textcolor(GREEN);
cprintf("\nEnter 1st number :");
scanf("%d",&no1);
cprintf("\nEnter 2nd number :");
scanf("%d",&no2);
_setcursortype(_NOCURSOR);
if(no1==no2)
{
textcolor(RED+BLINK);
gotoxy(30,20);
cprintf("Both inputed numbers are identical...");
}
else
{
_setcursortype(_SOLIDCURSOR);
if(no1>no2)
{
textcolor(1);
big=no1;
}
else
{
textcolor(2);
big=no2;
}
printf("\nBiggest value=%d",big);
}
getch();
}