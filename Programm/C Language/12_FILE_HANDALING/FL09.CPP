//writing data into student file using fwrite()
//==============================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct x
 {
 char regno[15],name[30];
 int mcs011,mcs012,mcs013,mcs014,mcs015,mcsl016,mcsl017;
 }r;
void main()
 {
 FILE *p;
 char regno[15],name[30];
 char ch='y';
 int flag;
 p=fopen("student2.txt","r+");
 if(p==NULL)
  {
  p=fopen("student2.txt","w");
  fclose(p);
  p=fopen("student2.txt","r+");
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
   printf("\nMarks of:\n");
   printf("mcs011: %d\tmcs012: %d\tmcs013: %d\n,mcs014: %d\tmcs015: %d\tmcsl016: %d\nmcsl017:%d",r.mcs011,r.mcs012,r.mcs013,r.mcs014,r.mcs015,r.mcsl016,r.mcsl017);
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
x1:  printf("\nmarks of mcs011: ");
  scanf("%d",&r.mcs011);
  if(r.mcs011<0||r.mcs011>100)
   {
   printf("\n\tError: should enter an integer lies between 0 and 100...");
   getch();
   goto x1;
   }
  printf("marks of mcs012: ");
  scanf("%d",&r.mcs012);
  printf("marks of mcs013: ");
  scanf("%d",&r.mcs013);
  printf("marks of mcs014: ");
  scanf("%d",&r.mcs014);
  printf("marks of mcs015: ");
  scanf("%d",&r.mcs015);
  printf("marks of mcsl016: ");
  scanf("%d",&r.mcsl016);
  printf("marks of mcsl017: ");
  scanf("%d",&r.mcsl017);

  fwrite(&r,sizeof(r),1,p);
  }
 printf("\n\nAny more entry now(y/n)? ");
 fflush(stdin);
 ch=getche();
 }
 fclose(p);
 }
