#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 FILE *fileptr;
 char x[20]="Suvadip Mandal";
 fileptr=fopen("test.txt","w");

 if(fileptr != NULL)
 {
 printf("String Length :%d",strlen(x));
 for(int i=0;i<strlen(x);i++)
 {
   printf("\nWrite character :%c",x[i]);
   fputc(x[i],fileptr);
 }
 }
 else
 printf("File unable to open");
 fclose(fileptr);

 getch();
}