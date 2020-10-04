#include<stdio.h>
#include<conio.h>
void main()
   {
   char name[30];
   int roll,age;
   FILE *p;
   p=fopen("student","r");
   fscanf(p,"%d %s %d",&roll,name,&age);
   printf("\nName=%s Roll=%d AGE=%d",name,roll,age);
   getch();
   fclose(p);
   }