#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char x[40];
 int l,i;
 clrscr();
 printf("enter any string :");
 gets(x);
 l=strlen(x);
 for(i=0;i<l;++i)
 printf("%c\n",x[i]);
 getch();
 }
