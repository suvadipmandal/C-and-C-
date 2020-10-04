//ractanglefa patten
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=21;++i)
{
for(j=1;j<=21;++j)
{
if(i==1||i==21||j==1||j==21||i==j||i+j==22||j==11||i==11)
{
if(((i>=2&&i<=9)||(j>=2&&j<=9))||((i>=13&&i<=20)||(j>=13&&j<=20)))
textcolor(YELLOW+128);
else
textcolor(RED);
cprintf("%c%c%c",219,219,219);
}
else
{
textcolor(GREEN);
printf("%c%c%c",176,176,176);
}
}
printf("\n");
}
getch();
}