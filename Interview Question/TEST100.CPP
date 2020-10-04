#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char p[]="suvadipmandal";
 char t;
 int i,j;
 for(i=0,j=strlen(p);i<j;i++)
 {
 t=p[i];
 p[i]=p[j-i];
 p[j-i]=t;
 }
 printf("%s",p);
 getch();
}