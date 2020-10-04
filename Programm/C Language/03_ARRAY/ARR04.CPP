//Array in c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int no[3],i;
 clrscr();
 for(i=0;i<3;++i)
 {
 printf("%d and %d\t",no[i],&no[i]);
 }
 getch();
}