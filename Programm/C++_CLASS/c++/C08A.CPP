#include<iostream.h>
#include<conio.h>
 int sum(int x,int y=78)
  {
  return(x+y);
  }
void main()
 {
 clrscr();
 int s=sum(100,200);
 int s1=sum(100);
 cout<<"\nsum="<<s;
 cout<<"\nsum="<<s1;
 getch();
 }