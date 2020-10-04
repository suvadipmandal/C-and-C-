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
 FILE *p1,*p2,*p3;
 int tot,c1=0,c2=0,c3=0;
 float avg;
 p1=fopen("stu.txt","r");
 p2=fopen("pass.txt","w");
 p3=fopen("fail.txt","w");
  clrscr();
  while(fread(&r,sizeof(r),1,p1)==1)
   {
   ++c1;
   tot=r.sub1+r.sub2+r.sub3;
   avg=tot/3;
   if(avg>=50)
    {
    ++c2;
    fwrite(&r,sizeof(r),1,p2);
    }
   else
    {
    ++c3;
    fwrite(&r,sizeof(r),1,p3);
    }
   }
  printf("\nFile successfully Splited into pass.txt and fail.txt...");
  printf("\nNumber of records in  stu.txt file : %d",c1);
  printf("\nNumber of records in pass.txt file : %d",c2);
  printf("\nNumber of records in fail.txt file : %d",c3);
  getch();
 fcloseall();
 }
