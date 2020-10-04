#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char x[40];
 int l,i,j;
 clrscr();
 printf("enter any string : ");
 gets(x);
 l=strlen(x);
 strupr(x);
 for(i=0;i<l;++i)
  {
  for(j=0;j<=i;++j)
   {
   printf("%c",x[j]);
   }
  printf("\n");
  }
 getch();
 }