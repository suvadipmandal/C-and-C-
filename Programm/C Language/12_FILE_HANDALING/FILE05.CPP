#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 if(rename("test.dat","test.html")==0)
 {
 puts("File rename sucessful");
 }
 else
 {
 puts("Error while renameing the fails");
 }
 getch();
}