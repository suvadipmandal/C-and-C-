#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *fileptr;

 fileptr=fopen("test.dat","r");

 if(fileptr != NULL)
 {
 char ch;
 while(!feof(fileptr))
 {
   ch = fgetc(fileptr);
   printf("%c",ch);
 }
 fclose(fileptr);
 }
 else
 printf("File unable to open");

 getch();
}