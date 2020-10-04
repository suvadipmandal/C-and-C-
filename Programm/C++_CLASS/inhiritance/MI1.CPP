#include<iostream.h>
#include<conio.h>
class A
 {
 protected:
 int no1;
 public:
 void input1(void)
  {
  clrscr();
  cout<<"\nEnter 1st number :";
  cin>>no1;
  }
 };
class B
 {
 protected:
 int no2;
 public:
 void input2(void)
  {
  clrscr();
  cout<<"\nEnter 2nd number :";
  cin>>no2;
  }
 };
class C:public A,public B
 {
 int big;
 public:
 void print(void)
  {
  big=(no1>no2)?no1:no2;
  cout<<"\nBiggest value="<<big;
  }
 };
void main()
 {
 C cc;
 cc.input1();
 cc.input2();
 cc.print();
 getch();
 }