#include<iostream.h>
#include<conio.h>
#include<string.h>
class abcd
 {
 char *n;
 public:
 abcd(void)
  {
  n=new char[1];
  }
 abcd(char *name)
  {
  n=new char[strlen(name)];
  strcpy(n,name);
  }
 void merge(char *x,char *y)
  {
  n=new char[strlen(x)+strlen(y)];
  strcpy(n,x);
  strcat(n,y);
  }
 void display(void)
  {
  cout<<"\nname="<<n;
  }
 };
void main()
 {
 abcd a1("chagol");
 abcd a2("pagol");
 abcd a3;
 a3.merge("chagol ","pagol");
 clrscr();
 a1.display();
 a2.display();
 a3.display();
 getch();
 }