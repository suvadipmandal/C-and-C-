//swapping of two array
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],c[10],i;
 clrscr();
 for(i=0;i<10;i++)
 {
 printf("enter 1st array %d element :",i+1);
 scanf("%d",&a[i]);
 }
 clrscr();
 for(i=0;i<10;i++)
 {
 printf("enter 2nd array %d element :",i+1);
 scanf("%d",&b[i]);
 }
 clrscr();
 printf("After swapping 1st array element :\n");
 for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 printf("After swapping 2nd array element :\n");
 for(i=0;i<10;i++)
 printf("%d\t",b[i]);


 for(i=0;i<10;i++)
 {
 c[i]=a[i];
 a[i]=b[i];
 b[i]=c[i];
 }

 printf("\n\nBefore swapping 1st array element :\n");
 for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 printf("Before swapping 2nd array element :\n");
 for(i=0;i<10;i++)
 printf("%d\t",b[i]);
 getch();
}