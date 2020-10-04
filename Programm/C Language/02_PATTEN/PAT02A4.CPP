//multiple line patten
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=10;++i)
{
for(j=1;j<=i;++j)
{
if(i==10||j==1||i==j)
textcolor(YELLOW);
else
textcolor(GREEN+128);
cprintf("%c",48);
}
printf("\n");
}
getch();
}