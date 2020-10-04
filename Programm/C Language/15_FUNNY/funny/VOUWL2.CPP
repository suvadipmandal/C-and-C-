#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char w[60],x;
int i,l,v=0;
clrscr();
printf("Enter any string:");
gets(w);
l=strlen(w);
for(i=0;i<l;++i)
 {
 x=w[i];
 x=tolower(x);
 if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u',++v);
 }
printf("\n no of vouwls=%d",v);
getch();
}