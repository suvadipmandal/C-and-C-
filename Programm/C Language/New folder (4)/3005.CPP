#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter any no:");
scanf("%d",&no);
   {
   if(no<10)
   printf("\n inputed no is one digit long");
   else
      if(no<100)
      printf("\n inputed no is two digits long");
      else
	  if(no<1000)
	  printf("\n inputed no is four digits long");
	  else
	  printf("\n Ami balte parbo na....");

    }
}
