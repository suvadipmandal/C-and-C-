#include<stdio.h>
#include<conio.h>
void print(int);
void master(void)
 {
 static int i=1;
 if(i<=10)
 print(i++);
 }
void print(int i)
 {
 printf("%d\t",i);
 master();
 }
void main()
 {
 clrscr();
 master();
 getch();
 }