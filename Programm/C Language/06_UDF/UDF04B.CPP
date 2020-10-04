//call by reference/address
#include<stdio.h>
#include<conio.h>
void print(int *x,int n)
{
int i;
printf("\nInputed numbers :\n");
for(i=0;i<n;++i)
printf("%d\t",*(x+i));
}
void main()
{
int no[10],i;
clrscr();
for(i=0;i<10;++i)
{
printf("Enter number %2d: ",i+1);
scanf("%d",&no[i]);
}
print(&no[0],10);
getch();
}