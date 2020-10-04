//rewind function
#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 FILE *tmp;

 tmp = tmpfile();
 if(tmp != NULL)
 {
 puts("tmp file created\n");
 }
 else
 puts("Unable to create the temporary file");

 getch();
}