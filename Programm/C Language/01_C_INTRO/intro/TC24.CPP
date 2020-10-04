#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char name[40],address[50];
 clrscr();
 printf("Name of the student :");
 scanf("%s",name);
 fflush(stdin);
 printf("Address :");
 scanf("%s",address);
 printf("\nWel-come %s you comes from %s.",name,address);
 getch();
 }