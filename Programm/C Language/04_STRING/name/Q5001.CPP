#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char name[60];
inti,l,b=0;
clrscr();
printf("Enter any name:");
gets(name);
l=strlen(name);
for(i=0;i<l;++i)
{
if(name[i]=='  ')
b=i;
}
for(i=0;i<l;++i)
{
if(i==0)
printf("%c",toupper(name[i]);
else
if(name[i]='  '&& name [i-1]==' ')
printf("%c",toupper(name[i]);
}
for(i=b+1;i<l;++i)
{
if(i==b+1)
printf("%c",toupper(name[i]));
else
printf("%v",tolower(name[i]));
}
getch();
}
