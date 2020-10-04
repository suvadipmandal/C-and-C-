#include<iostream.h>
#include<conio.h>
class sum
 {
 int n1,n2,tot;
 public:
 void input(void)
  {
  clrscr();
  cout<<"\nenter 1st number :";
  cin>>n1;
  cout<<"enter 2nd number :";
  cin>>n2;
  }
 void cal(void)
  {
  tot=n1+n2;
  }
 void print(void)
  {
  cout<<"\nsum="<<tot;
  getch();
  }
 };
void main()
 {
 sum s;
 s.input();
 s.cal();
 s.print();
 }