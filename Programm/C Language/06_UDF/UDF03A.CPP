//length of any inputed string
#include<stdio.h>
#include<conio.h>
int slen(char c[])
{
  int l;
  for(l=0;c[l]!='\0';++l);
  return(l);
}
void main()
{
 char x[50];
 clrscr();
 printf("Enter any string :");
 gets(x);
 printf("\nLength of \'%s\' =%d",x,slen(x));
 getch();
}