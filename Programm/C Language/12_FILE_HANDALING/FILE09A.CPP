//rewind function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 FILE *tmp;

 char data[]="hello world";
 int length=strlen(data);
 int counter=-1;

 tmp = tmpfile();
 if(tmp != NULL)
 {
 puts("tmp file created\n");
 while( ++counter < length )
 {
 fputc(data[counter],tmp);
 }
 rewind(tmp);

 while(!feof(tmp))
 {
 putchar(fgetc(tmp));
 }
 }
 else
 puts("Unable to create the temporary file");

 getch();
}