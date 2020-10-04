#include<iostream.h>
#include<conio.h>
class sum
 {
 int a,b,c;
 public:
 sum(void)
  {
  a=45;
  b=55;
  }
 void input(void)
  {
  //clrscr();
  cout<<"\nenter 1st number :";
  cin>>a;
  cout<<"enter 2nd number :";
  cin>>b;
  }
 void print(void)
  {
  c=a+b;
  cout<<"\nSum="<<c;
  }
 };
void main()
 {
 clrscr();
 sum s;
 s.print();
 s.input();
 s.print();
 getch();
 }