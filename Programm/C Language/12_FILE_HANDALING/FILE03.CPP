#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 FILE *fileptr;
 char x[100];

 fileptr=fopen("test.txt","a");

 if(fileptr != NULL)
 {
   printf("Enter your message :");
   gets(x);
   fputs(x,fileptr);
   printf("Write data sucessfully");
 }
 else
 printf("File unable to open");
 fclose(fileptr);

 getch();
}