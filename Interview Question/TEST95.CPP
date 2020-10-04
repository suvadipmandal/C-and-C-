#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i=10;
 static int x=i;
 if(x==i)
 printf("Equal");
 else if(x>i)
 printf("Greater than");
 else
 printf("Less than");
 getch();
}