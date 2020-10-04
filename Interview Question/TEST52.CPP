#include<stdio.h>
#include<conio.h>

void display(int);
void main()
{
clrscr();
display(60);
display(80);
display(40);
display(70);
display(20);
}
void display(int a)
{
int p;
p++;
printf("\np value %d\t a value %d",p,a);
getch();
}