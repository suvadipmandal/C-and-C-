#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *fileptr;

 fileptr=fopen("test.txt","a");

 if(fileptr != NULL)
 printf("File open sucessful");
 else
 printf("File unable to open");

 fclose(fileptr);

 getch();
}