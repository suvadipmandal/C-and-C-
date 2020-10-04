#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
 {
 ofstream x;
 x.open("stu3.txt",ios::app);
 while(1)
 {
 char name[30];
 clrscr();
 cout<<"name of the student : ";
 cin.getline(name,30);
 if(name[0]=='x')break;
 x<<name<<endl;
 fflush(stdin);
 }
 x.close();
 }