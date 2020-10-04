#include<iostream.h>
#include<conio.h>
class complex
 {
 float real,ima;
 public:

 complex(void)//default constructor
  {}


  complex(float x,float y)//constructor that takes float members as arguments
  {
  real=x;
  ima=y;
  }
 complex add(complex &c1,complex &c2);//function takes object as arguments and returning object


 void display(void)
  {
  cout<<"\nreal= "<<real<<"\tima= "<<ima;
  }
 };

 
 complex complex::add(complex &c1,complex &c2)
 {
 complex c3;
 c3.real=c1.real+c2.real;
 c3.ima=c1.ima+c2.ima;
 return(c3);
 }
void main()
 {
 complex c1(2.5,3.9);
 complex c2(3.3,5.5);
 complex c3,c4;
 clrscr();
 c3=c3.add(c1,c2);
 c1.display();
 c2.display();
 c3.display();
 getch();
 }




