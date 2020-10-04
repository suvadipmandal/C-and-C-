//constructor with default arguments
//==================================
#include<iostream.h>
#include<conio.h>
class handu
 {
 int n1,n2,tot;
 public:
 handu(int x=22,int y=33)//parameterized constructor with default arguments
  {
  n1=x;
  n2=y;
  }
 void print(void)
  {
  tot=n1+n2;
  cout<<"\nsum="<<tot;
  }
 };
void main()
 {
 clrscr();
 handu h1;//n1=22,n2=33
 handu h2(420);//n1=420,n2=33
 handu h3(420,840);//n1=420,n2=840
 h1.print();
 h2.print();
 h3.print();
 getch();
 }