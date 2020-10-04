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
 char regno[1],name[30];
 char ch='y';
 int flag;
 p=fopen("stu.txt","r+");
 while(ch=='y'||ch=='Y')
  {
  flag=0;
  clrscr();
  printf("\nRegistration number :");
  scanf("%s",regno);
  rewind(p);
  while(fread(&r,sizeof(r),1,p)==1)
   {
   if(strcmp(r.regno,regno)==0)
    {
    printf("Name=%s\nSUb1:%d\tSub2=%d\tSub3=%d",r.name,r.sub1,r.sub2,r.sub3);
    printf("\n\n\tRecord already in file...");
    flag=1;
    }
   }
  if(flag==0)
   {
   printf("name of the student :");
   fflush(stdin);
   gets(name);
   strcpy(r.regno,regno);
   strcpy(r.name,name);
   printf("marks of subject1 : ");
   scanf("%d",&r.sub1);
   printf("marks of subject2 : ");
   scanf("%d",&r.sub2);
   printf("marks of subject3 : ");
   scanf("%d",&r.sub3);
   fwrite(&r,sizeof(r),1,p);
   }
  printf("\n\n\tAny more entry now(y/n)? ");
  fflush(stdin);
  ch=getche();
  }
 fclose(p);
 }
