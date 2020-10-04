#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 struct date d;
 clrscr();
 getdate(&d);
 printf("Current date : %02d/%02d/%d",d.da_day,d.da_mon,d.da_year);
 getch();
 }

