#include<iostream.h>
#include<conio.h>
#include<string.h>
class abcd
 {
 int no;
 public:
 abcd(void)
 {}
 abcd(int x)
  {
  no=x;
  }
 abcd(abcd &x)
  {
  no=x.no;
  }
 void display(void)
  {
  cout<<"\nno="<<no;
  }
 };
void main()
 {
 clrscr();
 abcd a1(100);
 abcd a2(a1);//copy constructor
 abcd a3=a1;//copy constructor
 abcd a4;
 a4=a1;//initialized
 a1.display();
 a2.display();
 a3.display();
 a4.display();
 getch();
 }