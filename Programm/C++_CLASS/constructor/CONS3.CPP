#include<iostream.h>
#include<conio.h>
class sum
 {
 int n1,n2,tot;
 public:
 sum(int x,int y) //parameterized constructor
  {
  n1=x;
  n2=y;
  }
 void display(void)
  {
  tot=n1+n2;
  cout<<"\nSum="<<tot;
  }
 };
void main()
 {
 sum s1(22,33);//parameterized constructor is invoked implicitly
 clrscr();
 s1.display();
 getch();
 }