#include<iostream.h>
#include<conio.h>
class sum
 {
 public:
 int n1,n2,tot;
 void initial(void)
  {
  n1=100;
  n2=200;
  }
  void print(void)
   {
   tot=n1+n2;
   cout<<"\nSum="<<tot;
   }
  };
  void main()
   {
   sum s;
   clrscr();
   s.initial();
   s.print();
   getch();
  }