//length of any inputed no
#include<stdio.h>
#include<conio.h>
int slen(long c)
{
  int l=0;
  while(c>0)
  {
  ++l;
  c=c/10;
  }
  return(l);
}
void main()
{
 long no;
 clrscr();
 printf("Enter any number :");
 scanf("%ld",&no);
 printf("\nLength of \'%ld\' =%d",no,slen(no));
 getch();
}