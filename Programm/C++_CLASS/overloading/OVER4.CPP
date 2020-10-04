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
  a=10;
  b=20;
  c=80;
  }
 void print(void)
  {
  cout<<"\na="<<a<<"\tb="<<b<<"\tc="<<c;
  }
 void operator --(void)
  {
  a-=1;
  b-=1;
  c-=1;
  }
 };
 void main()
  {
  khandu k;
  clrscr();
  k.print();
  --k;
  k.print();
  --k;
  k.print();
  getch();
  }