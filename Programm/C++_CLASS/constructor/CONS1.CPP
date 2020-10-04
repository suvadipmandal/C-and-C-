#include<iostream.h>
#include<conio.h>
class sum
 {
 int n1,n2,tot;
 public:
 sum(void) //default constructor or non-parameterized constructor
  {
  n1=12;
  n2=43;
  }
 void display(void)
  {
  tot=n1+n2;
  cout<<"\nSum="<<tot;
  }
 };
void main()
 {
 sum s1;//invoked default constructor
 clrscr();
 s1.display();
 getch();
 }