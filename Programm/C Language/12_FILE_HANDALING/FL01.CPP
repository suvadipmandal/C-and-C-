//writing data into student file using fprintf()
//==============================================
#include<stdio.h>
#include<conio.h>
void main()
 {
 FILE *p;
 char regno[15],name[30];
 clrscr();
 p=fopen("student.txt","w");
 printf("Registration No. :");
 gets(regno);
 printf("Student's name :");
 gets(name);
 fprintf(p,"%s %s\n",regno,name);
 fclose(p);
 }
