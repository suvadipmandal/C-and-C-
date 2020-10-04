#include<iostream.h>
#include<conio.h>
template <class t>
t max(t a,t b)
 {
 if(a>b)
 return(a);
 else
 return(b);
 }
void main()
 {
 clrscr();
 int x1=max(100,200);
 float x2=max(2.96,1.22);
 long x3=max(12345678,7654321);
 cout<<"\nx1="<<x1;
 cout<<"\nx2="<<x2;
 cout<<"\nx3="<<x3;
 getch();
 }