//User i/o integer number
#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,tot;
clrscr();
printf("\nEnter start value :");
scanf("%d",&no2);
printf("Enter stop value :");
scanf("%d",&no1);
--no2;
tot=((no1*(no1+1))/2)-((no2*(no2+1))/2);
printf("\n\nSum=%d",tot);
getch();
}