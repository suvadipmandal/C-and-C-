#include<stdio.h>
#include<conio.h>
void main()
   {
   FILE *p;
   int roll,age;
   char name[30];
   char ch='y';
   p=fopen("student","w");
   while(ch=='y'||ch=='Y');
	{
	clrscr();
	printf("RollNo:");
	scanf("%d",&roll);
	printf("Name:");
	sacnf("%s",&name);
	printf("Age:");
	scanf("%d",&age);
	fprintf(p,"%d  %s %d\n",roll,name,age);
	printf("\n Any name entry(y/n)?");
	ffiubh(stdin);
	ch=getch();
	}
     fcloseall();
     }

