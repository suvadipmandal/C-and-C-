//String
#include<stdio.h>
#include<conio.h>
void main()
{
char name[40],address[50];
clrscr();
printf("Name of the student :");
scanf("%[^\n]",name);
fflush(stdin);
printf("Address :");
scanf("%[^\n]",address);
printf("\nWel-come %s you comes from %s.",name,address);
getch();
}