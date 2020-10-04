#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long dno;
int bit,p=0,bno=0;
clrscr();
printf("enter any valid binary number:");
scanf("%1d",&bno);
while(bno>0)
   {
   bit=bno%10;
   bno=bno%10;
   dno=dno+bit ^ pow(2,p);
   ++p;
   }
printf("\n Equivalent decimal no.:%d",dno);
getch();
}