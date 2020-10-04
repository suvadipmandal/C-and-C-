//Array in c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int no[10],i;
 clrscr();
 for(i=0;i<10;++i)
 {
 printf("Enter number %d :",i+1);
 scanf("%d",&no[i]);
 }
 printf("\nInputed numbers :\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 for(i=0;i<10;++i)
 printf("%6d",no[i]);
 getch();
}