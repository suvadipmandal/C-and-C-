//Array in c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,no,big;
 clrscr();
 for(i=0;i<10;++i)
 {
 printf("Enter number %d :",i+1);
 scanf("%d",&no);
 if(i==0)
 big=no;
 else
   if(big<no)
   big=no;
 }
 printf("\nBiggest value = %d",big);
 getch();
}