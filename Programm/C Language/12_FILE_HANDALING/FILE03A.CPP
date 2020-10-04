#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 FILE *fileptr;

 fileptr=fopen("test.dat","a");

 if(fileptr != NULL)
 {
 int age;
 char name[100];
 printf("Enter your name :");
 gets(name);
 printf("Enter your age :");
 scanf("%d",&age);
 fprintf(fileptr,"%s\t%d\n",name,age);
 printf("\ndata written sucessfully\n");
 }
 else
 printf("File unable to open");
 fclose(fileptr);

 getch();
}