#include<stdio.h>
#include<conio.h>
#include<string.h>
struct record
 {
 char regno[10],name[30];
 int sub1,sub2,sub3;
 }r;
void main()
 {
 FILE *p;
 p=fopen("stu.txt","r");
 clrscr();
 while(fread(&r,sizeof(r),1,p)==1)
 {
 printf("\nReg. No. :%s\nName : %s\nSub1: %d\tSub2: %d\tSub3: %d",
 r.regno,r.name,r.sub1,r.sub2,r.sub3);
 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 }
 getch();
 fclose(p);
 }
