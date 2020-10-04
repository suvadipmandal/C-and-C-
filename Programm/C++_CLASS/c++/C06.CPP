#include<iostream.h>
#include<conio.h>
class sum
 {
 int a,b,c;
 public:
 sum(void)
  {
  clrscr();
  cout<<"\nenter 1st number :";
  cin>>a;
  cout<<"enter 2nd number :";
  cin>>b;
  }
  ~sum()
  {
  c=a+b;
  cout<<"\nSum="<<c;
  getch();
  }
 void print(void)
  {
  cout<<"\nHalum and Hulum are friends..."<<endl;
  }
 };
void main()
 {
 sum s;
  {
  sum s1;
  s1.print();
  }
 s.print();
 //getch();
 }