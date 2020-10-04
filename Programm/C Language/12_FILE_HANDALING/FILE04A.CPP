#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *fileptr;

 fileptr=fopen("test.dat","r");

 if(fileptr != NULL)
 {
 char name[20],age[20];
 fscanf(fileptr,"%s\t%s",name,age);
 printf("%s\t%s",name,age);
 fclose(fileptr);
 }
 else
 printf("File unable to open");

 getch();
}