#include<fstream.h>
#include<conio.h>
void main()
 {
 ofstream x;
 x.open("stu.txt");
 char name[10];
 clrscr();
 cout<<"name of the student : ";
 cin>>name;
 x<<name;
 x.close();
 }