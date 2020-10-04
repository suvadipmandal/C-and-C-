#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int status;
 status=remove("test.htm");
 if(status==0)
 {
 printf("File sucessfull delete");
 }
 else
 {
 printf("Error occure");
 }
 getch();
}