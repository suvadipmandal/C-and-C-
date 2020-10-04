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
 int flag;
 p=fopen("student1.txt","r+");
 if(p==NULL)
  {
  p=fopen("student1.txt","w");
  fclose(p);
  p=fopen("student1.txt","r+");
  }
 while(ch=='Y' || ch=='y')
 {
 flag=0;
 clrscr();
 printf("Registration No. :");
 gets(regno);
 rewind(p);
 while(fread(&r,sizeof(r),1,p)==1)
  {
  if(strcmp(r.regno,regno)==0)
   {
   printf("\nName=%s",r.name);
   flag=1;
   printf("\n\n\tRecord already in file...");
   }
  }
 if(flag==0)
  {
  printf("Name of the student :");
  gets(name);
  strcpy(r.regno,regno);
  strcpy(r.name,name);
  fwrite(&r,sizeof(r),1,p);
  }
 printf("\n\nAny more entry now(y/n)? ");
 fflush(stdin);
 ch=getche();
 }
 fclose(p);
 }
