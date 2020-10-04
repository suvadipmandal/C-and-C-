//1 3 5 7... 100 without loop
#include<stdio.h>
#include<conio.h>
void print(void)
{
static int i=1;
printf("%d\t",i);
i+=2;
if(i<=100)
 print();
}
void main()
{
clrscr();
print();
getch();
}
