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
 p=fopen("student1.txt","r");
 while(fread(&r,sizeof(r),1,p)==1)
 printf("\nReg. No=%s\tName=%s",r.regno,r.name);
 getch();
 fclose(p);
 }
