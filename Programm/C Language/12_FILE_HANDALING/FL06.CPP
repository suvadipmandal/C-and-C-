//writing data into student file using fwrite()
//==============================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct x
 {
 char regno[15],name[30];
 }r;
void main()
 {
 FILE *p;
 char regno[15],name[30];
 char ch='y';
 p=fopen("student1.txt","a");
 while(ch=='y' || ch=='y')
 {
 clrscr();
 printf("Registration No. :");
 gets(regno);
 printf("Student's name :");
 gets(name);
 strcpy(r.regno,regno);
 strcpy(r.name,name);
 fwrite(&r,sizeof(r),1,p);
 printf("\n\nAny more entry now(y/n)? ");
 fflush(stdin);
 ch=getche();
 }
 fclose(p);
 }
