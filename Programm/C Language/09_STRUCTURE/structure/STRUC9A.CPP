#include<stdio.h>
#include<conio.h>
void main()
  {
  int i;
  for(i=0;i<3;++i)
    {
    printf("Enter 1st no:");
    scanf("%d",&xx[i].no1);
    printf("Enter 2nd no:");
    scanf("%d",&xx[i].no2);
    xx[i].tot=xx[i].no1+xx[i].no2;
    }
for(i=0;i<3;++i)
printf("\n sum of %d and%d is :%d;xx[i].no1,xx.no2,xx[i].tot");
getch();
}