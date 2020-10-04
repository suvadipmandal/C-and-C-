//sname list character upper case
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char name[50];
int i,l,b;
clrscr();
printf("Enter any name :");
gets(name);
for(l=0;name[l]!='\0';++l)
 if(name[l]==' ')
 b=l;
 for(i=0;i<b;++i)
  if(i==0)
   printf("%c. ",toupper(name[0]));
  else
   if(name[i]!=' '&& name[i-1]==' ')
    printf("%c. ",toupper(name[i]));
    for(i=b+1;i<l;printf("%c",(i==b+1)?toupper(name[i]):tolower(name[i])),++i);
    getch();
}