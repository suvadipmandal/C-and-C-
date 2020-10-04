#include<iostream.h>
#include<conio.h>
class sum
 {
 int a,b,c;
 public:
 sum(int x,int y)
  {
  a=x;
  b=y;
  }
 sum(void)
  {
  a=8;
  b=9;
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
 sum s(45,55);
 sum s1;
 s.print();
 s1.print();
 s.input();
 s1.input();
 s.print();
 s1.print();
 getch();
 }