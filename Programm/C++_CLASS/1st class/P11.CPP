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
 sum s[5];
 int i;
 for(i=0;i<5;++i)
 s[i].input();
 for(i=0;i<5;++i)
 s[i].master();
 getch();
 }