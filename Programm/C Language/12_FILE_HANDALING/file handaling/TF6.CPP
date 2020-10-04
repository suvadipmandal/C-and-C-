#include<stdio.h>
#include<conio.h>
void main()
 {
 char x[80];
 FILE *p;
 clrscr();
 p=fopen("tf6.cpp","r");
 while(fgets(x,80,p))
 printf("%s",x);
 getch();
 fclose(p);
 }

