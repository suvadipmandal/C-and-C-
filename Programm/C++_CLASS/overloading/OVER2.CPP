//function overloading with default arguments
//===========================================
#include<iostream.h>
#include<conio.h>
int sum(int x=2,int y=3)
 {
 return(x+y);
 }
int sum (int x,int y,int z)
 {
 return(x+y+z);
 }
void main()
 {
 clrscr();
 int s=sum(100,200);
 int ss=sum(100);
 int sss=sum();
 int s1=sum(22,33,44);
 cout<<s<<endl;
 cout<<ss<<endl;
 cout<<sss<<endl;
 cout<<s1;
 getch();
 }