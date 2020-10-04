#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char name[40];
 clrscr();
 printf("Name of the student :");
 gets(name);
 strrev(name);
 printf("\nName as reverse order : %s",name);
 getch();
 }