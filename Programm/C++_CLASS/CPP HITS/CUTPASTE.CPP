#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
FILE *p,*q;
char ch;
int i;
char a[10]="";
clrscr();

//p=fopen("jai1.cpp","r");
q=fopen("jai2.cpp","w");
//while((ch=fgetc(p))!=EOF)
//{
       //	printf("%c",ch);
//}
fprintf(q,"%c",ch);
while((ch=fgetc(q))!=EOF)
{
for(ch='p';ch!='(';ch++)
{
printf("%c",ch);
for( i=0;i<=10;++i)
{
a[i]=ch;
if(a=="printf")
a="c";
}
}
}
fcloseall();
getch();
}
