#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char name[40],address[50];
 clrscr();
 printf("Name of the student :");
 gets(name);
 fflush(stdin);
 printf("Address :");
 gets(address);
 printf("\nWel-come %s you comes from %s.",name,address);
 getch();
 }