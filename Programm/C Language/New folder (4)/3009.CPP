#include<stdio.h>
#include<conio.h>
void main ()
{
int no;
clrscr();
printf("Enter any no:");
scanf("%d",&no);
 {
 if(no<10)
 printf("\n inputed no is are digit long ");
 else
    if(no<10)
    printf("\n inputed no is one digits long ");
    else
	if(no<100)
	printf("\n inputed no is two digits long");
	else
	    if(no<1000)
	    printf("\inputed no is three digits long ");
	    else
	       if(no<10000)
	       printf("\n inputed no is four digits long ");
	       else
		  printf("\n Ami balte parbo na.....");

 }
getch();
}