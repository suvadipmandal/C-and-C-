#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char x[40];
 int l,i;
 clrscr();
 printf("enter any string : ");
 gets(x);
 l=strlen(x);
 gotoxy(20,1);
 for(i=0;i<l;++i)
 {
  if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
  textcolor(GREEN);
  else
  textcolor(WHITE);
  cprintf("%c",x[i]);
  }
 getch();
 }
