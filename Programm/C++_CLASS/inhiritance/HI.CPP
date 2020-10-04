#include<iostream.h>
#include<conio.h>
class A
 {
 protected:
 int no1,no2;
 public:
 void input(void)
  {
  clrscr();
  cout<<"\nEnter 1st number :";
  cin>>no1;
  cout<<"\nEnter 2nd number :";
  cin>>no2;
  }
 };
class B:public A
 {
 int big;
 public:
 void print(void)
  {
  big=(no1>no2)?no1:no2;
  cout<<"\nBiggest value= from "<<no1<<" and "<<no2<<" = "<<big;
  }
 };
class C:public A
 {
 int small;
 public:
 void print(void)
  {
  small=(no1<no2)?no1:no2;
  cout<<"\nSmallest value= from "<<no1<<" and "<<no2<<" = "<<small;
  }
 };
void main()
 {
 B bb;
 C cc;
 bb.input();
 cc.input();
 clrscr();
 bb.print();
 cc.print();
 getch();
 }