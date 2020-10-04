#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
 {
 char x[80],fn[15];
 FILE *p;
 clrscr();
 printf("\nENter any file name :");
 scanf("%s",fn);
 p=fopen(fn,"r");
 if(p==NULL)
  {
  printf("\n%s does not exist...",fn);
  getch();
  exit(1);
  }
 while(fgets(x,80,p))
 printf("%s",x);
 getch();
 fclose(p);
 }

