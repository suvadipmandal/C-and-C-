#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

 void secpin(int,int,int ,int,int);
 void minpin(int ,int ,int ,int ,int );
 void hrpin(int ,int ,int ,int ,int );
 void Rectangle(int,int ,int ,int);
 void Line(int ,int ,int ,int );
 void secmove(int,int);
 void minmove(int,int);
 void hrmove(int,int);

 main()
 {
  int d,m;
  d=DETECT;
  initgraph(&d,&m,"..\\bgi");
  setcolor(1);
  setfillstyle(1,1);
  rectangle(1,0,650,500);
  floodfill(3,3,1);
   int x1=1,x2=650,y1=0,y2=0;
      for(int s=1;s<500;s+=4)
	  Line(x1,y1+s,x2,y1+s);



  setcolor(0);
  setfillstyle(1,0);
  rectangle(100,60,500,420);
  floodfill(102,62,0);



  setcolor(4);
   x1=120,y1=30,x2=480,y2=450;
  for(int i=1;i<=20;i++)
  rectangle(x2++,y1++,x1--,y2--);
  setcolor(10);
  x1=120;x2=480;
  for(i=1;i<=12;i++)
  rectangle(x2++,y1++,x1--,y2--);
  setcolor(14);
  x1=120;x2=480;
  for(i=1;i<=3;i++)
  rectangle(x2++,y1++,x1--,y2--);

  struct  time t;
    int count=0;
    int z,w;
    while(!kbhit())
      {

  setcolor(15);
  settextstyle(8,0,5);
  outtextxy(170,70,"11");
  outtextxy(400,70,"1");
  setcolor(10);
  settextstyle(8,0,5);
  outtextxy(280,70,"12");
  setcolor(15);
  settextstyle(8,0,5);
  outtextxy(125,140,"1");
  outtextxy(145,140,"0");
  outtextxy(440,140,"2");
  setcolor(10);
  settextstyle(8,0,5);
  outtextxy(135,210,"9");
  outtextxy(440,210,"3");
  setcolor(15);
  settextstyle(8,0,5);
  outtextxy(135,285,"8");
  outtextxy(440,285,"4");
  outtextxy(185,350,"7");
  outtextxy(390,350,"5");
  setcolor(10);
  settextstyle(8,0,5);
  outtextxy(292,350,"6");



     setcolor(15);
     settextstyle(5,0,1);
     outtextxy(270,150,"Midnapur");
     outtextxy(280,290,"Kuikota");
     settextstyle(2,0,4);
     setcolor(14);
     outtextxy(290,315,"Tapas");

  setcolor(2);
  settextstyle(4,0,3);
  outtextxy(180,110, "........................................");

  outtextxy(180,325, ".........................................");
  for(int l=114;l<325;l+=6)
  outtextxy(175,l,".");
  for(l=114;l<322;l+=6)
  outtextxy(420,l,".");
     setcolor(15);
     circle(300,240,5);
     circle(300,240,8);
       gettime(&t);
       minmove(t.ti_min,t.ti_sec);
      secmove(t.ti_sec,t.ti_min);
	int min=t.ti_min;

       int hr=t.ti_hour%12;
	     hr=hr*5;
      if(count==0)
       {
	 if(min>=48)
	     hr+=4;
	  else
	     if(min>=36)
	     hr+=3;
	     else
	      if(min>=24)
	      hr+=2;
	       else
	      if(min>=12)
	      hr+=1;
	      hrmove(hr,t.ti_min);

	}
      }


  //****************************Half Cycle





 getch();
 closegraph();

 } // End main()

/////////////////////////////////////////////////////////////////////////////
///////////////////////////  Functions Defination ///////////////////////////
/////////////////////////////////////////////////////////////////////////////

 void secpin(int x2,int y2,int x1,int y1,int col)
   {

    setcolor(col);
    line(x1,y1,x2,y2);
    setcolor(col);
    circle(x1,y1,2);
   }


    void minpin(int x2,int y2,int x1,int y1,int col)
   {

    setcolor(col);
    line(x1,y1,x2,y2);
    setcolor(col);
    circle(x1,y1,2);


   }
   void hrpin(int x2,int y2,int x1,int y1,int col)
   {

    setcolor(col);
    line(x1,y1,x2,y2);

    setcolor(col);
     circle(x1,y1,2);
     circle(x1,y1,4);
   }
 void Line(int x1,int y1,int x2,int y2)
     {
     setcolor(7);
     line(x1,y1,x2,y2);
     line(x1,y1+1,x2,y2+1);
     }
 void Rectangle(int x1,int y1,int x2,int y2)
 {
   setcolor(7);
   rectangle(x1,y1,x2,y1);
   rectangle(x2,y1,x2,y2);

   setcolor(8);
   rectangle(x1,y2,x2,y2);
   rectangle(x1,y1,x1,y2);
 }

  void secmove(int sec,int min)
  {
      int x1=300,y1=240,c1=14,c2=0;
   if(sec==1)
   secpin(x1,y1,315,106,c1);
   if(sec==2)
   secpin(x1,y1,330,108,c1);
   if(sec==3)
   secpin(x1,y1,345,113,c1);
   if(sec==4)
   secpin(x1,y1,360,119,c1);
   if(sec==5)
   secpin(x1,y1,375,128,c1);
   if(sec==6)
   secpin(x1,y1,388,138,c1);
   if(sec==7)
   secpin(x1,y1,400,148,c1);
   if(sec==8)
   secpin(x1,y1,407,157,c1);
   if(sec==9)
   secpin(x1,y1,412,165,c1);
   if(sec==10)
   secpin(x1,y1,420,177,c1);
   if(sec==11)
   secpin(x1,y1,426,190,c1);
   if(sec==12)
   secpin(x1,y1,430,203,c1);
   if(sec==13)
   secpin(x1,y1,432,213,c1);
   if(sec==14)
   secpin(x1,y1,435,225,c1);
   if(sec==15)
   secpin(x1,y1,435,240,c1);
       if(sec==16)
       secpin(x1,y1,435,253,c1);
       if(sec==17)
       secpin(x1,y1,432,268,c1);
       if(sec==18)
       secpin(x1,y1,429,282,c1);
       if(sec==19)
       secpin(x1,y1,425,293,c1);
       if(sec==20)
       secpin(x1,y1,420,305,c1);
       if(sec==21)
       secpin(x1,y1,412,317,c1);
       if(sec==22)
       secpin(x1,y1,403,328,c1);
       if(sec==23)
       secpin(x1,y1,393,338,c1);
       if(sec==24)
       secpin(x1,y1,380,348,c1);
       if(sec==25)
       secpin(x1,y1,368,358,c1);
       if(sec==26)
       secpin(x1,y1,355,365,c1);
       if(sec==27)
       secpin(x1,y1,340,370,c1);
       if(sec==28)
       secpin(x1,y1,325,374,c1);
       if(sec==29)
       secpin(x1,y1,310,376,c1);
       if(sec==30)
       secpin(x1,y1,300,375,c1);
       if(sec==31)
       secpin(x1,y1,285,375,c1);
       if(sec==32)
       secpin(x1,y1,270,372,c1);
       if(sec==33)
       secpin(x1,y1,256,368,c1);
       if(sec==34)
       secpin(x1,y1,240,362,c1);
       if(sec==35)
       secpin(x1,y1,225,355,c1);


       if(sec==36)
       secpin(x1,y1,215,346,c1);
       if(sec==37)
       secpin(x1,y1,205,338,c1);
       if(sec==38)
       secpin(x1,y1,195,328,c1);
       if(sec==39)
       secpin(x1,y1,186,314,c1);
       if(sec==40)
      secpin(x1,y1,180,300,c1);
      if(sec==41)
      secpin(x1,y1,174,290,c1);
      if(sec==42)
      secpin(x1,y1,169,277,c1);
      if(sec==43)
      secpin(x1,y1,166,265,c1);
      if(sec==44)
      secpin(x1,y1,165,252,c1);
      if(sec==45)
      secpin(x1,y1,163,240,c1);
      if(sec==46)
      secpin(x1,y1,165,228,c1);
      if(sec==47)
      secpin(x1,y1,168,214,c1);
      if(sec==48)
      secpin(x1,y1,170,200,c1);
      if(sec==49)
      secpin(x1,y1,175,185,c1);
      if(sec==50)
      secpin(x1,y1,182,172,c1);
      if(sec==51)
      secpin(x1,y1,190,160,c1);
      if(sec==52)
      secpin(x1,y1,198,150,c1);
      if(sec==53)
      secpin(x1,y1,208,140,c1);
      if(sec==54)
      secpin(x1,y1,218,130,c1);
      if(sec==55)
      secpin(x1,y1,230,123,c1);
      if(sec==56)
      secpin(x1,y1,243,117,c1);
      if(sec==57)
      secpin(x1,y1,255,111,c1);
      if(sec==58)
      secpin(x1,y1,270,108,c1);
      if(sec==59)
      secpin(x1,y1,285,105,c1);
      if(sec==0)
      secpin(x1,y1,300,105,c1);

       if(sec==0)
	sec=59;
       else
	sec=sec-1;
      if(sec==1)
   secpin(x1,y1,315,106,c2);
   if(sec==2)
   secpin(x1,y1,330,108,c2);
   if(sec==3)
   secpin(x1,y1,345,113,c2);
   if(sec==4)
   secpin(x1,y1,360,119,c2);
   if(sec==5)
   secpin(x1,y1,375,128,c2);
   if(sec==6)
   secpin(x1,y1,388,138,c2);
   if(sec==7)
   secpin(x1,y1,400,148,c2);
   if(sec==8)
   secpin(x1,y1,407,157,c2);
   if(sec==9)
   secpin(x1,y1,412,165,c2);
   if(sec==10)
   secpin(x1,y1,420,177,c2);
   if(sec==11)
   secpin(x1,y1,426,190,c2);
   if(sec==12)
   secpin(x1,y1,430,203,c2);
   if(sec==13)
   secpin(x1,y1,432,213,c2);
   if(sec==14)
   secpin(x1,y1,435,225,c2);
   if(sec==15)
   {
   secpin(x1,y1,435,240,c2);
   if(min==15)
   minpin(x1,y1,437,240,11);
   }
       if(sec==16)
       secpin(x1,y1,435,253,c2);
       if(sec==17)
       secpin(x1,y1,432,268,c2);
       if(sec==18)
       secpin(x1,y1,429,282,c2);
       if(sec==19)
       secpin(x1,y1,425,293,c2);
       if(sec==20)
       secpin(x1,y1,420,305,c2);
       if(sec==21)
       secpin(x1,y1,412,317,c2);
       if(sec==22)
       secpin(x1,y1,403,328,c2);
       if(sec==23)
       secpin(x1,y1,393,338,c2);
       if(sec==24)
       secpin(x1,y1,380,348,c2);
       if(sec==25)
       secpin(x1,y1,368,358,c2);
       if(sec==26)
       secpin(x1,y1,355,365,c2);
       if(sec==27)
       secpin(x1,y1,340,370,c2);
       if(sec==28)
       secpin(x1,y1,325,374,c2);
       if(sec==29)
       secpin(x1,y1,310,376,c2);
       if(sec==30)
       {
       secpin(x1,y1,300,375,c2);
       if(min==30)
       minpin(x1,y1,300,375,11);
       }
       if(sec==31)
       secpin(x1,y1,285,375,c2);
       if(sec==32)
       secpin(x1,y1,270,372,c2);
       if(sec==33)
       secpin(x1,y1,256,368,c2);
       if(sec==34)
       secpin(x1,y1,240,362,c2);
       if(sec==35)
       secpin(x1,y1,225,355,c2);


       if(sec==36)
       secpin(x1,y1,215,346,c2);
       if(sec==37)
       secpin(x1,y1,205,338,c2);
       if(sec==38)
       secpin(x1,y1,195,328,c2);
       if(sec==39)
       secpin(x1,y1,186,314,c2);
       if(sec==40)
      secpin(x1,y1,180,300,c2);
      if(sec==41)
      secpin(x1,y1,174,290,c2);
      if(sec==42)
      secpin(x1,y1,169,277,c2);
      if(sec==43)
      secpin(x1,y1,166,265,c2);
      if(sec==44)
      secpin(x1,y1,165,252,c2);
      if(sec==45)
      {
      secpin(x1,y1,163,240,c2);
      if(min==45)
      minpin(x1,y1,165,240,11);
      }
      if(sec==46)
      secpin(x1,y1,165,228,c2);
      if(sec==47)
      secpin(x1,y1,168,214,c2);
      if(sec==48)
      secpin(x1,y1,170,200,c2);
      if(sec==49)
      secpin(x1,y1,175,185,c2);
      if(sec==50)
      secpin(x1,y1,182,172,c2);
      if(sec==51)
      secpin(x1,y1,190,160,c2);
      if(sec==52)
      secpin(x1,y1,198,150,c2);
      if(sec==53)
      secpin(x1,y1,208,140,c2);
      if(sec==54)
      secpin(x1,y1,218,130,c2);
      if(sec==55)
      secpin(x1,y1,230,123,c2);
      if(sec==56)
      secpin(x1,y1,243,117,c2);
      if(sec==57)
      secpin(x1,y1,255,111,c2);
      if(sec==58)
      secpin(x1,y1,270,108,c2);
      if(sec==59)
      secpin(x1,y1,285,105,c2);
      if(sec==0)
      {
      secpin(x1,y1,300,105,c2);
      if(min==0)
      minpin(x1,y1,300,105,11);

      }


    }





    void minmove(int min,int sec)
  {
      int x1=300,y1=240,c1=11,c2=0;
   if(min==1)
   minpin(x1,y1,317,106,c1);
   if(min==2)
   secpin(x1,y1,332,108,c1);
   if(min==3)
   minpin(x1,y1,347,113,c1);
   if(min==4)
   minpin(x1,y1,362,119,c1);
   if(min==5)
   minpin(x1,y1,377,128,c1);
   if(min==6)
   minpin(x1,y1,390,138,c1);
   if(min==7)
   minpin(x1,y1,402,148,c1);
   if(min==8)
   minpin(x1,y1,409,157,c1);
   if(min==9)
   minpin(x1,y1,414,165,c1);
   if(min==10)
   minpin(x1,y1,422,177,c1);
   if(min==11)
   minpin(x1,y1,428,190,c1);
   if(min==12)
   minpin(x1,y1,432,203,c1);
   if(min==13)
   minpin(x1,y1,434,213,c1);
   if(min==14)
   minpin(x1,y1,437,225,c1);
   if(min==15)
   minpin(x1,y1,437,240,c1);
       if(min==16)
       minpin(x1,y1,437,253,c1);
       if(min==17)
       minpin(x1,y1,434,268,c1);
       if(min==18)
       minpin(x1,y1,431,282,c1);
       if(min==19)
       minpin(x1,y1,427,293,c1);
       if(min==20)
       minpin(x1,y1,422,305,c1);
       if(min==21)
       minpin(x1,y1,414,317,c1);
       if(min==22)
       minpin(x1,y1,405,328,c1);
       if(min==23)
       minpin(x1,y1,395,338,c1);
       if(min==24)
       minpin(x1,y1,382,348,c1);
       if(min==25)
       minpin(x1,y1,370,358,c1);
       if(min==26)
       minpin(x1,y1,357,365,c1);
       if(min==27)
       minpin(x1,y1,342,370,c1);
       if(min==28)
       minpin(x1,y1,327,374,c1);
       if(min==29)
       minpin(x1,y1,312,376,c1);
       if(min==30)
       minpin(x1,y1,300,375,c1);
       if(min==31)
       minpin(x1,y1,287,375,c1);
       if(min==32)
       minpin(x1,y1,272,372,c1);
       if(min==33)
       minpin(x1,y1,258,368,c1);
       if(min==34)
       minpin(x1,y1,242,362,c1);
       if(min==35)
       minpin(x1,y1,227,355,c1);


       if(min==36)
       minpin(x1,y1,217,346,c1);
       if(min==37)
       minpin(x1,y1,207,338,c1);
       if(min==38)
       minpin(x1,y1,197,328,c1);
       if(min==39)

       minpin(x1,y1,188,314,c1);
       if(min==40)
      minpin(x1,y1,182,300,c1);
      if(min==41)
      minpin(x1,y1,176,290,c1);
      if(min==42)
      minpin(x1,y1,171,277,c1);
      if(min==43)
      minpin(x1,y1,168,265,c1);
      if(min==44)
      minpin(x1,y1,167,252,c1);
      if(min==45)
      minpin(x1,y1,165,240,c1);
      if(min==46)
      minpin(x1,y1,167,228,c1);
      if(min==47)
      minpin(x1,y1,170,214,c1);
      if(min==48)
      minpin(x1,y1,172,200,c1);
      if(min==49)
      minpin(x1,y1,177,185,c1);
      if(min==50)
      minpin(x1,y1,184,172,c1);
      if(min==51)
      minpin(x1,y1,192,160,c1);
      if(min==52)
      minpin(x1,y1,200,150,c1);
      if(min==53)
      minpin(x1,y1,210,140,c1);
      if(min==54)
      minpin(x1,y1,220,130,c1);
      if(min==55)
      minpin(x1,y1,232,123,c1);
      if(min==56)
      minpin(x1,y1,245,117,c1);
      if(min==57)
      minpin(x1,y1,257,111,c1);
      if(min==58)
      minpin(x1,y1,272,108,c1);
      if(min==59)
      minpin(x1,y1,287,105,c1);
      if(min==0)
      minpin(x1,y1,300,105,c1);

     if(sec==0)
     {
     if(min==0)
      min=59;
      else
       min-=1;

      if(min==1)
   minpin(x1,y1,317,106,c2);
   if(min==2)
   secpin(x1,y1,332,108,c2);
   if(min==3)
   minpin(x1,y1,347,113,c2);
   if(min==4)
   minpin(x1,y1,362,119,c2);
   if(min==5)
   minpin(x1,y1,377,128,c2);
   if(min==6)
   minpin(x1,y1,390,138,c2);
   if(min==7)
   minpin(x1,y1,402,148,c2);
   if(min==8)
   minpin(x1,y1,409,157,c2);
   if(min==9)
   minpin(x1,y1,414,165,c2);
   if(min==10)
   minpin(x1,y1,422,177,c2);
   if(min==11)
   minpin(x1,y1,428,190,c2);
   if(min==12)
   minpin(x1,y1,432,203,c2);
   if(min==13)
   minpin(x1,y1,434,213,c2);
   if(min==14)
   minpin(x1,y1,437,225,c2);
   if(min==15)
   minpin(x1,y1,437,240,c2);
       if(min==16)
       minpin(x1,y1,437,253,c2);
       if(min==17)
       minpin(x1,y1,434,268,c2);
       if(min==18)
       minpin(x1,y1,431,282,c2);
       if(min==19)
       minpin(x1,y1,427,293,c2);
       if(min==20)
       minpin(x1,y1,422,305,c2);
       if(min==21)
       minpin(x1,y1,414,317,c2);
       if(min==22)
       minpin(x1,y1,405,328,c2);
       if(min==23)
       minpin(x1,y1,395,338,c2);
       if(min==24)
       minpin(x1,y1,382,348,c2);
       if(min==25)
       minpin(x1,y1,370,358,c2);
       if(min==26)
       minpin(x1,y1,357,365,c2);
       if(min==27)
       minpin(x1,y1,342,370,c2);
       if(min==28)
       minpin(x1,y1,327,374,c2);
       if(min==29)
       minpin(x1,y1,312,376,c2);
       if(min==30)
       minpin(x1,y1,300,375,c2);
       if(min==31)
       minpin(x1,y1,287,375,c2);
       if(min==32)
       minpin(x1,y1,272,372,c2);
       if(min==33)
       minpin(x1,y1,258,368,c2);
       if(min==34)
       minpin(x1,y1,242,362,c2);
       if(min==35)
       minpin(x1,y1,227,355,c2);


       if(min==36)
       minpin(x1,y1,217,346,c2);
       if(min==37)
       minpin(x1,y1,207,338,c2);
       if(min==38)
       minpin(x1,y1,197,328,c2);
       if(min==39)

       minpin(x1,y1,188,314,c2);
       if(min==40)
      minpin(x1,y1,182,300,c2);
      if(min==41)
      minpin(x1,y1,176,290,c2);
      if(min==42)
      minpin(x1,y1,171,277,c2);
      if(min==43)
      minpin(x1,y1,168,265,c2);
      if(min==44)
      minpin(x1,y1,167,252,c2);
      if(min==45)
      minpin(x1,y1,165,240,c2);
      if(min==46)
      minpin(x1,y1,167,228,c2);
      if(min==47)
      minpin(x1,y1,170,214,c2);
      if(min==48)
      minpin(x1,y1,172,200,c2);
      if(min==49)
      minpin(x1,y1,177,185,c2);
      if(min==50)
      minpin(x1,y1,184,172,c2);
      if(min==51)
      minpin(x1,y1,192,160,c2);
      if(min==52)
      minpin(x1,y1,200,150,c2);
      if(min==53)
      minpin(x1,y1,210,140,c2);
      if(min==54)
      minpin(x1,y1,220,130,c2);
      if(min==55)
      minpin(x1,y1,232,123,c2);
      if(min==56)
      minpin(x1,y1,245,117,c2);
      if(min==57)
      minpin(x1,y1,257,111,c2);
      if(min==58)
      minpin(x1,y1,272,108,c2);
      if(min==59)
      minpin(x1,y1,287,105,c2);
      if(min==0)
      minpin(x1,y1,300,105,c2);
       
      }
    }

    void hrmove(int hr,int min)
  {
      int x1=300,y1=240,c1=11,c2=0;
   if(hr==1)
   hrpin(x1,y1,310,150,c1);
   if(hr==2)
   hrpin(x1,y1,322,152,c1);
   if(hr==3)
   hrpin(x1,y1,332,156,c1);
   if(hr==4)
   hrpin(x1,y1,342,160,c1);
   if(hr==5)
   hrpin(x1,y1,352,166,c1);
   if(hr==6)
   hrpin(x1,y1,362,173,c1);
   if(hr==7)
   hrpin(x1,y1,368,180,c1);
   if(hr==8)
   hrpin(x1,y1,372,185,c1);
   if(hr==9)
   hrpin(x1,y1,376,192,c1);
   if(hr==10)
   hrpin(x1,y1,382,200,c1);
   if(hr==11)
   hrpin(x1,y1,385,207,c1);
   if(hr==12)
   hrpin(x1,y1,388,214,c1);
   if(hr==13)
   hrpin(x1,y1,390,223,c1);
   if(hr==14)
   hrpin(x1,y1,391,232,c1);
   if(hr==15)
   hrpin(x1,y1,390,240,c1);


       if(hr==16)
       hrpin(x1,y1,390,250,c1);
       if(hr==17)
       hrpin(x1,y1,388,260,c1);
       if(hr==18)
       hrpin(x1,y1,386,268,c1);
       if(hr==19)
       hrpin(x1,y1,383,276,c1);

       if(hr==20)
       hrpin(x1,y1,380,284,c1);
       if(hr==21)
       hrpin(x1,y1,376,292,c1);

       if(hr==22)
       hrpin(x1,y1,370,301,c1);
       if(hr==23)

       hrpin(x1,y1,363,307,c1);

       if(hr==24)
       hrpin(x1,y1,355,315,c1);

       if(hr==25)
       hrpin(x1,y1,346,320,c1);

       if(hr==26)
       hrpin(x1,y1,338,325,c1);

       if(hr==27)
       hrpin(x1,y1,330,328,c1);

       if(hr==28)
       hrpin(x1,y1,320,330,c1);
       if(hr==29)
       hrpin(x1,y1,312,332,c1);
       if(hr==30)
       hrpin(x1,y1,300,330,c1);

       if(hr==31)
       hrpin(x1,y1,290,330,c1);

       if(hr==32)
       hrpin(x1,y1,280,328,c1);


       if(hr==33)
       hrpin(x1,y1,270,326,c1);

       if(hr==34)
       hrpin(x1,y1,260,322,c1);

       if(hr==35)
       hrpin(x1,y1,250,318,c1);
       if(hr==36)
       hrpin(x1,y1,243,310,c1);
       if(hr==37)
       hrpin(x1,y1,238,304,c1);

       if(hr==38)
       hrpin(x1,y1,232,298,c1);
       if(hr==39)
       hrpin(x1,y1,225,290,c1);
       if(hr==40)
      hrpin(x1,y1,220,282,c1);

      if(hr==41)
      hrpin(x1,y1,215,274,c1);

      if(hr==42)
      hrpin(x1,y1,212,265,c1);

      if(hr==43)
      hrpin(x1,y1,210,255,c1);
      if(hr==44)
      hrpin(x1,y1,210,247,c1);
      if(hr==45)
      hrpin(x1,y1,210,240,c1);

      if(hr==46)
      hrpin(x1,y1,210,232,c1);
      if(hr==47)
      hrpin(x1,y1,212,222,c1);

      if(hr==48)
      hrpin(x1,y1,214,212,c1);

      if(hr==49)
      hrpin(x1,y1,218,202,c1);

      if(hr==50)
      hrpin(x1,y1,222,194,c1);

      if(hr==51)
      hrpin(x1,y1,226,186,c1);

      if(hr==52)
      hrpin(x1,y1,230,180,c1);

      if(hr==53)
      hrpin(x1,y1,238,174,c1);

      if(hr==54)
      hrpin(x1,y1,245,168,c1);

      if(hr==55)
      hrpin(x1,y1,252,162,c1);

      if(hr==56)
      hrpin(x1,y1,260,158,c1);

      if(hr==57)
      hrpin(x1,y1,270,153,c1);
      if(hr==58)
      hrpin(x1,y1,280,150,c1);
      if(hr==59)
      hrpin(x1,y1,290,148,c1);
     if(hr==0)
     hrpin(x1,y1,300,150,c1);

   if(min==0||min==12||min==24||min==36||min==48)
   {
     if(hr==0)
      hr=59;
      else
       hr-=1;
     if(hr==1)
   hrpin(x1,y1,310,150,c2);
   if(hr==2)
   hrpin(x1,y1,322,152,c2);
   if(hr==3)
   hrpin(x1,y1,332,156,c2);
   if(hr==4)
   hrpin(x1,y1,342,160,c2);
   if(hr==5)
   hrpin(x1,y1,352,166,c2);
   if(hr==6)
   hrpin(x1,y1,362,173,c2);
   if(hr==7)
   hrpin(x1,y1,368,180,c2);
   if(hr==8)
   hrpin(x1,y1,372,185,c2);
   if(hr==9)
   hrpin(x1,y1,376,192,c2);
   if(hr==10)
   hrpin(x1,y1,382,200,c2);



   if(hr==11)
   hrpin(x1,y1,385,207,c2);
   if(hr==12)
   hrpin(x1,y1,388,214,c2);
   if(hr==13)
   hrpin(x1,y1,390,223,c2);
   if(hr==14)
   hrpin(x1,y1,391,232,c2);
   if(hr==15)
   hrpin(x1,y1,390,240,c2);


       if(hr==16)
       hrpin(x1,y1,390,250,c2);
       if(hr==17)
       hrpin(x1,y1,388,260,c2);
       if(hr==18)
       hrpin(x1,y1,386,268,c2);
       if(hr==19)
       hrpin(x1,y1,383,276,c2);

       if(hr==20)
       hrpin(x1,y1,380,284,c2);
       if(hr==21)
       hrpin(x1,y1,376,292,c2);

       if(hr==22)
       hrpin(x1,y1,370,301,c2);
       if(hr==23)

       hrpin(x1,y1,363,307,c2);

       if(hr==24)
       hrpin(x1,y1,355,315,c2);

       if(hr==25)
       hrpin(x1,y1,346,320,c2);

       if(hr==26)
       hrpin(x1,y1,338,325,c2);

       if(hr==27)
       hrpin(x1,y1,330,328,c2);

       if(hr==28)
       hrpin(x1,y1,320,330,c2);
       if(hr==29)
       hrpin(x1,y1,312,332,c2);
       if(hr==30)
       hrpin(x1,y1,300,330,c2);

       if(hr==31)
       hrpin(x1,y1,290,330,c2);

       if(hr==32)
       hrpin(x1,y1,280,328,c2);


       if(hr==33)
       hrpin(x1,y1,270,326,c2);

       if(hr==34)
       hrpin(x1,y1,260,322,c2);

       if(hr==35)
       hrpin(x1,y1,250,318,c2);
       if(hr==36)
       hrpin(x1,y1,243,310,c2);
       if(hr==37)
       hrpin(x1,y1,238,304,c2);

       if(hr==38)
       hrpin(x1,y1,232,298,c2);
       if(hr==39)
       hrpin(x1,y1,225,290,c2);
       if(hr==40)
      hrpin(x1,y1,220,282,c2);

      if(hr==41)
      hrpin(x1,y1,215,274,c2);

      if(hr==42)
      hrpin(x1,y1,212,265,c2);

      if(hr==43)
      hrpin(x1,y1,210,255,c2);
      if(hr==44)
      hrpin(x1,y1,210,247,c2);
      if(hr==45)
      hrpin(x1,y1,210,240,c2);

      if(hr==46)
      hrpin(x1,y1,210,232,c2);
      if(hr==47)
      hrpin(x1,y1,212,222,c2);

      if(hr==48)
      hrpin(x1,y1,214,212,c2);

      if(hr==49)
      hrpin(x1,y1,218,202,c2);

      if(hr==50)
      hrpin(x1,y1,222,194,c2);

      if(hr==51)
      hrpin(x1,y1,226,186,c2);

      if(hr==52)
      hrpin(x1,y1,230,180,c2);

      if(hr==53)
      hrpin(x1,y1,238,174,c2);

      if(hr==54)
      hrpin(x1,y1,245,168,c2);

      if(hr==55)
      hrpin(x1,y1,252,162,c2);

      if(hr==56)
      hrpin(x1,y1,260,158,c2);

      if(hr==57)
      hrpin(x1,y1,270,153,c2);
      if(hr==58)
      hrpin(x1,y1,280,150,c2);
      if(hr==59)
      hrpin(x1,y1,290,148,c2);
     if(hr==0)
     hrpin(x1,y1,300,150,c2);
    }


    }
















