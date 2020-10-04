#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
 {
 char name[60];
 int i,l;
 clrscr();
 printf("Name of the student :");
 gets(name);
 l=strlen(name);
 for(i=0;i<l;++i)
  {
  if(i==0)
  name[i]=toupper(name[i]);
  else
   if(name[i]!=' ' && name[i-1]==' ')
   name[i]=toupper(name[i]);
   else
   name[i]=tolower(name[i]);
   }
  printf("\nName as proper order : %s",name);
  getch();
  }