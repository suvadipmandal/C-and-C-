//rewind function
#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *fp;

 fp=fopen("EXAMPLE.TXT","r");

 while(!feof(fp))
 {
 putchar(fgetc(fp));
 }
 fclose(fp);
 getch();
}