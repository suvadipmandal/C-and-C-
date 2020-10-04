#include<iostream.h>
#include<conio.h>
#include<dos.h>
class dt
 {
 struct date d;
 struct time t;
 public:
 dt(void)
  {
  getdate(&d);
  gettime(&t);
  }
 dt(int dd,int mm,int yy,int hh,int mi,int ss)
  {
  d.da_day=dd;
  d.da_mon=mm;
  d.da_year=yy;
  t.ti_hour=hh;
  t.ti_min=mi;
  t.ti_sec=ss;
  }
 void display(void)
  {
  cout<<"\nDate : "<<d.da_day<<"/"<<d.da_mon<<"/"<<d.da_year;
  cout<<"\nTime : "<<t.ti_hour<<":"<<t.ti_min<<":"<<t.ti_sec<<endl;
  }
 };
void main()
 {
 clrscr();
 dt d1;
 dt d2(12,12,1944,12,32,55);
 d1.display();
 d2.display();
 getch();
 }