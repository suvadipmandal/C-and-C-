#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *fileptr;

 fileptr=fopen("test.dat","r");

 if(fileptr != NULL)
 {
 char data[20];
 while(!feof(fileptr))
 {
 fgets(data,2,fileptr);
 printf("\nThe charecters : %s",data);
 }
 fclose(fileptr);
 }
 else
 printf("File unable to open");

 getch();
}