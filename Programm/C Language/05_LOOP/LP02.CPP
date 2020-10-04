// 1 2 3 4 ... 100
//print 1 to 100 number without for loop
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i=1;
 xx:
 if(i<=100)
 {
 printf("%d\t",i++);
 goto xx;
 }
 getch();
}