#include<stdio.h>
#include<conio.h>
int call(int);
void main()
{
 clrscr();
 static main;
 int x;
 x=call(main);
 printf("%d",x);
 getch();
}
int call(int address)
{
address++;
return address;
}