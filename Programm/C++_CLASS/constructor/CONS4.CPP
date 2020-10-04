//constructor overloading
//=======================
#include<iostream.h>
#include<conio.h>
class sum
 {
 int n1,n2,tot;
 public:
 sum(void)//non-parameterized constructor
  {
  n1=420;
  n2=840;
  }
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
 int n1,n2;
 clrscr();
 cout<<"\nenter 1st number : ";
 cin>>n1;
 cout<<"enter 2nd number : ";
 cin>>n2;
 sum s1(n1,n2);//parameterized constructor is invoked implicitly
 sum s2;//non-parameterized constructor is invoked
 clrscr();
 s1.display();
 s2.display();
 getch();
 }