#include<stdio.h>
#include<conio.h>
void main()
   {
   int i,n;
   int s =0;
   printf("Enter the range:");
   scanf("%d",&n);
   for(i=1;i<=n;++i)
	 {
	 s=s+i;
	 if(i<n)
	 printf("%d+",i);
	 else
	 printf("%d=",i);
	 }
       printf("%d",s);
}