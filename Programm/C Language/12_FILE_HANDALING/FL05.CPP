//writing data into student file using fprintf()
//==============================================
#include<stdio.h>
#include<conio.h>
void main()
 {
 FILE *p;
 char regno[15],name[30];
 p=fopen("student.txt","r");
 clrscr();
 while(fgetc(p)!=EOF)
 {
 fscanf(p,"%s %s",regno,name);
 printf("\nRegistration no: %s\nName :%s",regno,name);
 }

 getch();
 fclose(p);
 }
