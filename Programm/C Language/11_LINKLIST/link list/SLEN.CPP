#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char x[50];
 int l;
 clrscr();
 printf("enter any string :");
 gets(x);
 l=strlen(x);
 printf("\nLength= %d",l);
 getch();
 }