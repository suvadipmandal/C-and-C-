//function overloading
//====================
#include<iostream.h>
#include<conio.h>
int sum(int x,int y)
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
 int s1=sum(22,33,44);
 cout<<s<<endl;
 cout<<s1;
 getch();
 }