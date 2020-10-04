#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 char name [50];
 int l,i;
 clrscr();
 printf("Enter any name : ");
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
   printf("\nName in proper order:%s",name);
   getch();
   }