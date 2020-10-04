#include<iostream.h>
#include<conio.h>
main(){
clrscr();
int year,e,l,re;
int c,r,d;
cout<<"Enter The Year :";
cin>>year;
r=1;
  l=year/4;
  if(year%4==0)
  e=year+l+5;
  else
  e=l+year+6;
  re=e%7;
clrscr();
switch(re){
 case 0:
  c=3; break;
 case 1:
  c=7; break;
 case 2:
  c=11; break;
 case 3:
  c=15; break;
 case 4:
  c=19; break;
 case 5:
  c=23; break;
 case 6:
  c=27; break;
 }
 gotoxy(3,r);
 cout<<"                          CALENDER "<<year<<endl;
 gotoxy(3,++r);
 cout<<"       January    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r=r+1;
 for(d=1;d<=31;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=2;
  gotoxy(45,r);
  cout<<"          February  ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  if(year%4==0){
  for(d=1;d<=29;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;
   }
  }
  }
  else{

  for(d=1;d<=28;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;
   }
  }

  }
  c=70-c;
  c=28-c;
  r+=1;
gotoxy(3,++r);
 cout<<"         March    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r++;
 for(d=1;d<=31;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=10;
  gotoxy(45,r);
  cout<<"           April  ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  for(d=1;d<=30;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;

   }
  }
   r+=1;
   c=70-c;
  c=28-c;
gotoxy(3,++r);
 cout<<"         May    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r++;
 for(d=1;d<=31;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=18;
  gotoxy(45,r);
  cout<<"          June  ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  for(d=1;d<=30;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;
    }
    }
  getch();
  clrscr();
  c=70-c;
  c=28-c;
  r=1;
 gotoxy(3,r);
 cout<<"                          CALENDER "<<year<<endl;
 gotoxy(3,++r);
 cout<<"       July    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r++;
 for(d=1;d<=31;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=2;
  gotoxy(45,r);
  cout<<"          August ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  for(d=1;d<=31;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;

   }
  }
  r+=1;
  c=70-c;
  c=28-c;
gotoxy(3,++r);
 cout<<"       September    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r++;
 for(d=1;d<=30;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=10;
  gotoxy(45,r);
  cout<<"          October  ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  for(d=1;d<=31;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;

   }
  }
   r+=1;
   c=70-c;
  c=28-c;
 gotoxy(3,++r);
 cout<<"       November    ";
 gotoxy(3,++r);
 cout<<"Sun Mon Tue Wed Thu Fri Sat";
 r++;
 for(d=1;d<=30;d++){
 gotoxy(c,r);
    cout<<d;
    gotoxy(c+=4,r);
    if(c>27){
      r++;
      c=3;
    }
  }
  c=c+42;
  r=18;
  gotoxy(45,r);
  cout<<"          December  ";
  gotoxy(45,++r);
  cout<<"Sun Mon Tue Wed Thu Fri Sat";
  r++;
  for(d=1;d<=31;d++){
  gotoxy(c,r);
   cout<<d;
   gotoxy(c+=4,r);
   if(c>70){
   c=45;
   r++;
    }
    }
getch();
}