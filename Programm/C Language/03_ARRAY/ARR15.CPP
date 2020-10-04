//Array in c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,no[10],big;
 clrscr();
 for(i=0;i<10;++i)
 {
 printf("Enter number %d :",i+1);
 scanf("%d",&no[i]);
 if(i==0)
 big=no[i];
 else
   if(big<no[i])
   big=no[i];
 }
 clrscr();
 printf("\nInputed numbers are : ");
 for(i=0;i<10;printf("%d\t",no[i]),++i);
 printf("\nBiggest value = %d",big);
 getch();
}