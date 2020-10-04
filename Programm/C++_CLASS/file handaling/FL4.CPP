#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
 {
 ifstream x;
 clrscr();
 x.open("stu3.txt");
 char name[30];
 while(x)
 {
 x.getline(name,30);
 cout<<name<<endl;
 }
 getch();
 x.close();
 }