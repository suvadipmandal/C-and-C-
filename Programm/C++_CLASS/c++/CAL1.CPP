#include<iostream.h>
#include<conio.h>
class cal
{
   float no1,no2,tot;
   public:
   	void input(void)
   	{
   	cout<<"Enter 1st number :";
    	cin>>no1;
    	cout<<"Enter 2nd number :";
    	cin>>no2;
   	}

   	void print()
   	{
    	cout<<"your result :"<<tot;
   	}

   	void add()
   	{
    	input();
    	tot=no1+no2;
   	}

   	void sub()
   	{
    	input();
    	tot=no1-no2;
   	}

   	void mul()
   	{
    	input();
    	tot=no1*no2;
   	}

   	void div()
   	{
    	input();
    	tot=no1/no2;
   	}
};


  void main()
  {
  char ch,i;
  cal a;
  xx:
  while(1)
  {
  clrscr();
  cout<<"\n\t\t\tM E N U\n\t\t\t========\n";
  cout<<"\t\tenter (a/A) for Addition\n\t\tsub enter (S)\n\t\tmul enter (M)\n\t\tdiv enter (D)";
  cout<<"\n\t\tenter e/E for exit\n\t\tenter your choice :";
  cin>>ch;
  if(ch=='e'||ch=='E')break;
  if(ch=='A'||ch=='a')
  a.add();
  else
   {
   if(ch=='S'||ch=='s')
   a.sub();
   else
   {
    if(ch=='m'||ch=='M')
    a.mul();
    else
     {
     if(ch=='D'||ch=='d')
     a.div();
     else
      {
      cout<<"\nYou enter invalid key\nPlease Try Again...(y/n) :";
      cin>>i;
      if(i=='y'||i=='Y')
      goto xx;
      }
     }
    }
   }
  a.print();
  getch();
}
 }