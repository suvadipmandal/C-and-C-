#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a[5]={1,2,3,4,5};
 int i;
 for(i=0;i<5;i++)
 if((char)a[i]=='5')
 printf("%d\n",a[i]);
 else
 printf("FAIL\n");
 getch();
}
