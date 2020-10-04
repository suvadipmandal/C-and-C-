#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int status;
 char data[20]="hello world";
 FILE *fp;

 fp = fopen("example.txt","r");
 if(fp != NULL)
 {
   fprintf(fp,"%s",data);
   status = ferror(fp);
   printf("%d\n",status);
   clearerr(fp);
   status = ferror(fp);
   printf("%d\n",status);

   if(status == 0)
   {
    puts("No read or write error");
   }
   else
   puts("Read or write error");
 }
 else
 puts("Unable to open the file");

 getch();
}