#include<iostream.h>
#include<conio.h>
template <class t>
class rasogolla
 {
 t n1,n2,tot;
 public:
 void input(void)
  {
  clrscr();
  cout<<"\nenter 1st number : ";
  cin>>n1;
  cout<<"enter 2nd number : ";
  cin>>n2;
  }
 void print(void)
  {
  tot=n1+n2;
  cout<<"\n Sum of "<<n1<<" and "<<n2<<"= "<<tot;
  }
 };
void main()
 {
 rasogolla <int> r1;
 rasogolla <long> r2;
 rasogolla <float> r3;
 r1.input();
 r2.input();
 r3.input();
 r1.print();
 r2.print();
 r3.print();
 getch();
 }