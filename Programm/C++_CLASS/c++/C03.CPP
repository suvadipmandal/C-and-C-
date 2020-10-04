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
 s.print();
 s.input();
 s.print();
 getch();
 }