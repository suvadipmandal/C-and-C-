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
 int s=1;
 char fn[15];
 clrscr();
 printf("enter the file name : ");
 scanf("%s",fn);
 p=fopen(fn,"r");
 while(fread(&r,sizeof(r),1,p)==1)
 {
 ++s;
 printf("\nReg. No. :%s\t\tRecord No. (%05d)\nName : %s\nSub1: %d\tSub2: %d\tSub3: %d",
 r.regno,s,r.name,r.sub1,r.sub2,r.sub3);
 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 if(s%5==0)
  {
  printf("\nPress any key to continue...");
  getch();
  clrscr();
  }
 }
 getch();
 fclose(p);
 }
