//operator overloading with default arguments
//===========================================
#include<iostream.h>
#include<conio.h>
class khandu
 {
 int a,b,c;
 public:
 khandu(void)
  {
  a=420;
  b=-420;
  c=840;
  }
 void print(void)
  {
  cout<<"\na="<<a<<"\tb="<<b<<"\tc="<<c;
  }
 void operator -(void)
  {
  a=-a;
  b=-b;
  c=-c;
  }
 };
 void main()
  {
  khandu k;
  clrscr();
  k.print();
  -k;
  k.print();
  -k;
  k.print();
  getch();
  }