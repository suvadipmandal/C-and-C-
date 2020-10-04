//print single line patten
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
chuncho:
printf("*");
++i;
if(i<=10)
goto chuncho;
getch();
}