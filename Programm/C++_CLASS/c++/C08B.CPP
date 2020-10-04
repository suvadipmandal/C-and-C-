#include<iostream.h>
#include<conio.h>
 int sum(int x=67,int y=78)
  {
  return(x+y);
  }
void main()
 {
 clrscr();
 int s=sum(100,200);
 int s1=sum(100);
 int s2=sum();
 cout<<"\nsum="<<s;
 cout<<"\nsum="<<s1;
 cout<<"\nsum="<<s2;
 getch();
 }