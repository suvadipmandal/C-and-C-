#include<iostream.h>
#include<conio.h>
class sum
 {
 int n1,n2,tot;
 void cal(void)
  {
  tot=n1+n2;
  }
 void print(void)
  {
  cout<<"\nsum="<<tot;
  getch();
  }
 public:
 void input(void)
  {
  cout<<"\nenter 1st number :";
  cin>>n1;
  cout<<"enter 2nd number :";
  cin>>n2;
  }
 void master(void)
  {
  cal();
  print();
  }
 };
void main()
 {
 clrscr();
 sum s,s1,s2;
 s.input();
 s1.input();
 s2.input();
 s.master();
 s1.master();
 s2.master();
 }