#include<iostream.h>
#include<conio.h>
class sum
 {
 int a,b,c;
 public:
 void input(void)
  {
  clrscr();
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
 sum s;
 s.input();
 s.print();
 getch();
 }