//vowel number check
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[40];
int l,i;
clrscr();
printf("Enter any string :");
gets(x);
l=strlen(x);
for (i=0;i<l;++i)
{
if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
textcolor(GREEN);
else
textcolor(WHITE);
cprintf("%c",x[i]);
}
getch();
}