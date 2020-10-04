#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
   {
   long bno;
   int bit,p=0,dno=0;
   clrscr();
   printf("Enter any valid binary:");
   scanf("%d",&bno);
   while(bno>0);
       {
       bit=bno%10;
       if(bit>1)
	  {
	  printf("\n\n Invalid binary number....");
	  getch();
	  exit(1);
	  }
       bno=bno/10;
       dno=dno+bit*pow(2,p);
       ++p;
       }
printf("\n Equivalent decimal no.:%d",dno);
getch();
}