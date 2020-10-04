 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 #include<stdlib.h>

 //************************* Functions Declearations *********************

 void Intro();
 void instructions();
 void Rectangle(int ,int ,int, int ,int );
 void Rectangle1(int ,int ,int ,int ,int);
 void fill(int,int,int);
 void movement(int,int);
 void check1();
 void insert1(int ,int);
 void insert2(int ,int);
 void Tick1(int ,int );
 void Tick2(int ,int );
 void win_player1();
 void win_player2();

 //************************* End Functions Declearations ******************

 main()
  {

   int d,m;
   d=DETECT;
   initgraph(&d,&m,"..\\bgi");
      cleardevice();
      Intro();   // Intro Function Called
      top:

 ///////////////////////////// Start Of Main Menue  //////////////////////
      cleardevice();
      setbkcolor(0);
      setcolor(2);
      settextstyle(10,0,1);
      outtextxy(220,30,"Main Menue");
      setcolor(4);
      line(220,70,380,70);
      line(220,72,380,72);
      int za1x=4,zb1y=4,za2x=615,zb2y=469;
      for(int zafar1=1;zafar1<4;zafar1++)
	   {
	   setcolor(9);
	   rectangle(++za1x,++zb1y,--za2x,--zb2y);
	   }
	   setcolor(7);
	   rectangle(3,3,616,470);
	   rectangle(10,10,609,463);
  menu:
    char ch1='H';
    int x=0;
      while(ch1!='\r')
	{
  me:
       switch(ch1)
	{
	 case 'H':
	 setcolor(4);
	 settextstyle(7,0,3);
	 outtextxy(100,160,"Enter To View Instructions");
	 outtextxy(100,200,"Enter To Exit Game");
	 setcolor(2);
	 outtextxy(100,120,"Enter To Play Game");
	 ch1=getche();
	 x=0;
	 if(ch1=='\r')
	 goto  game;
	 break;

	 case 'P':
	 if(x==0){
	 setcolor(4);
	 settextstyle(7,0,3);
	 outtextxy(100,120,"Enter To Play Game");
	 outtextxy(100,200,"Enter To Exit Game");
	 setcolor(2);
	 outtextxy(100,160,"Enter To View Instructions");
	 x=x+1;
	 rept:
	 ch1=getche();
	 if(ch1=='\r')
	 {
	 instructions();
	 getch();
	 goto top;
	  }
	if(ch1=='H')
	    goto menu;
	else
	   if(ch1!='P')
	      goto rept;
	   else
	      goto next;
	   }

	else
	 {
  next:
	 setcolor(4);
	 settextstyle(7,0,3);
	 outtextxy(100,120,"Enter To Play Game");
	 outtextxy(100,160,"Enter To View Instructions");
	 setcolor(2);
	 outtextxy(100,200,"Enter To Exit Game");
	 rept1:
	 ch1=getche();
	 if(ch1=='\r')
	    exit(0);
	 else
	   if(ch1!='H')
	   goto rept1;
	 else
	     goto menu;

	  {
	 goto menu;
	 break;
	  }
       }
    }   // End Of Switch
    ch1=getche();
       } // End Of While
 ///////////////////////////  End Of Main Menue  ////////////////////////

  game :

 ///////////////////////// Start Of Coding For Game /////////////////////

  int arr[3][3],count1[3][3],count2[3][3];

    for(int l=0;l<3;l++)         // Initilization of arr[3][3]
       for(int n=0;n<3;n++)
	    arr[l][n]=0;

    for(l=0;l<3;l++)            // Initilization of count1[3][3]
       for(n=0;n<3;n++)
	   count1[l][n]=0;

    for(l=0;l<3;l++)            // Initilization of count2[3][3]
       for(n=0;n<3;n++)
	    count2[l][n]=0;

     cleardevice();
     setbkcolor(0);

 ////////////////////// Designing of Game's Main page //////////////////

 int a1x=4,b1y=4,a2x=615,b2y=469;

     for(int zafar2=1;zafar2<4;zafar2++)
	  {
	  setcolor(9);
	  rectangle(++a1x,++b1y,--a2x,--b2y);
	  }
	  setcolor(7);
	  rectangle(3,3,616,470);
	  rectangle(10,10,609,463);
	  setcolor(7);
	  rectangle(30,394,590,455);
     a1x=31,b1y=395,a2x=589,b2y=454;
	for(zafar1=1;zafar1<5;zafar1++)   // Rectangular Border of The Page
	{
	setcolor(1);
	rectangle(a1x++,b1y++,a2x--,b2y--);
	}
	setcolor(2);
	setfillstyle(1,2);
	rectangle(35,399,585,450);
	floodfill(37,402,2);
	setcolor(7);
	rectangle(35,399,585,450);
    setcolor(14);
    settextstyle(8,0,3);
    outtextxy(180,20,"TIC TAC GAME ");

 ///// Instruct instructions Given On The Game's Main Page For Player 1 /////

    setcolor(10);
    settextstyle(8,0,3);
    outtextxy(20,60,"PLAYER 1");
    setcolor(4);
    line(20,90,140,90);
    line(20,92,140,92);
    setcolor(15);
    settextstyle(7,0,1);
    outtextxy(20,120," Use Arrow ");
    settextstyle(7,0,1);
    outtextxy(20,160,"   Keys   ");
    settextstyle(7,0,1);
    outtextxy(20,200," to Select &");
    settextstyle(7,0,1);
    outtextxy(20,240,"Enter Button");
    settextstyle(7,0,1);
    outtextxy(20,280," to Insert");

 ///// Instruct instructions Given On The Game Main Page For Player 2 /////

    setcolor(10);
    settextstyle(8,0,3);
    outtextxy(420,60,"PLAYER 2");
    setcolor(4);
    line(420,90,540,90);
    line(420,92,540,92);
    setcolor(15);
    settextstyle(7,0,1);
    outtextxy(420,120,"Use Numeric");
    settextstyle(7,0,1);
    outtextxy(420,160," Arrow Keys ");
    settextstyle(7,0,1);
    outtextxy(420,200," to Select & ");
    settextstyle(7,0,1);
    outtextxy(420,240,"Ins Button");
    settextstyle(7,0,1);
    outtextxy(420,280," to Insert");

 ////////////////////////////  End Instructions ////////////////////////////

 /////Formation of Main Rectangular Box Containing Smallar Rectangles //////

 //******* Formation Of Border of Rectangular Box With Colored Fill *******
    setcolor(10);
    rectangle(160,70,395,380);
    rectangle(161,71,394,379);
    setcolor(4);
    setfillstyle(1,4);
    rectangle(162,72,393,378);
    floodfill(164,74,4);
    setcolor(14);
    rectangle(159,69,396,381);
    setcolor(1);
    rectangle(158,68,397,382);
    rectangle(157,67,398,383);
    rectangle(156,66,399,384);
 //********End of Formation Of Border Of Box Colored Fill.

 //******** Small Rectangular in Main Box
    setcolor(7);
    Rectangle(170,80,235,150,14);    //rectangle [0,0]
    Rectangle(245,80,310,150,14);    //rectangle [0,1]
    Rectangle(320,80,385,150,14);    //rectangle [0,2]

    Rectangle(170,160,235,230,14);   //rectangle [1,0]
    Rectangle(245,160,310,230,14);   //rectangle [1,1]
    Rectangle(320,160,385,230,14);   //rectangle [1,2]

    Rectangle(170,240,235,305,14);   //rectangle [2,0]
    Rectangle(245,240,310,305,14);   //rectangle [2,1]
    Rectangle(320,240,385,305,14);   //rectangle [2,3]


 //******** End Small Rectangular in Main Box

     movement(0,0);

 /////////////////// End Designing of Game's Main page //////////////////


 /////////////////// Start of Game's Logical Programming /////////////////

     int x1,y1,x2,y2;
     x1=169;
     y1=313;
     x2=389;
     y2=373;
     for(x=1;x<17;x++)
     {
       setcolor(15);
       rectangle(x1,y1,x2,y2);
	x1=x1+2;
	y1=y1+2;
	x2=x2-2;
	y2=y2-2;
     }
   char ch=0;
	x=0;
   int  y=0;

 player1:

////////////////////// Plying Conditions For Player 1 ///////////////////

   while(ch!=27)
	 {

	 setcolor(2);
	 settextstyle(8,0,4);
	 outtextxy(120,400,"Second Player's Term");
	 setcolor(1);
	 settextstyle(8,0,4);
	 outtextxy(120,400,"First Player's Term");

     movement(x,y);
   ch=getche();
      if(ch=='M'&&y<2&&y>=0)
	 {
	 y=y+1;
	 }
      if(ch=='K'&&y<=2&&y>0)
	 {
	 y=y-1;
	 }
      if(ch=='P'&&x<2&&x>=0)
	{
	 x=x+1;
	 }
       if(ch=='H'&&x<=2&&x>0)
	{
	x=x-1;
	}

    if(ch=='\r'&&arr[x][y]==0)
      {
      insert1(x,y);
      arr[x][y]=1;
      count1[x][y]=1;
      setcolor(10);
      settextstyle(8,0,4);

 //******************* Win Conditions For First Player ******************

       if(count1[0][0]==1&&count1[1][0]==1&&count1[2][0]==1)  //1st column
	  {
	      Rectangle1(170,80,235,150,2);
	      Rectangle1(170,160,235,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player1();
	      goto end;
	    }
       else
	 if(count1[0][1]==1&&count1[1][1]==1&&count1[2][1]==1) //2nd column
	     {
	      Rectangle1(245,80,310,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(245,240,310,305,2);
	      win_player1();
	      goto end;
	     }
	else
	 if(count1[0][2]==1&&count1[1][2]==1&&count1[2][2]==1) //3rd column
	   {
	     Rectangle1(320,80,385,150,2);
	     Rectangle1(320,160,385,230,2);
	     Rectangle1(320,240,385,305,2);
	     win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][0]==1&&count1[0][1]==1&&count1[0][2]==1)  //1st row
	 {
	   Rectangle1(170,80,235,150,2);
	   Rectangle1(245,80,310,150,2);
	   Rectangle1(320,80,385,150,2);
	   win_player1();
	    goto end;
	 }
	 else
	  if(count1[1][0]==1&&count1[1][1]==1&&count1[1][2]==1)  //2nd row
	  {
	   Rectangle1(170,160,235,230,2);
	   Rectangle1(245,160,310,230,2);
	   Rectangle1(320,160,385,230,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[2][0]==1&&count1[2][1]==1&&count1[2][2]==1) // 3rd row
	 {
	  Rectangle1(170,240,235,305,2);
	  Rectangle1(245,240,310,305,2);
	  Rectangle1(320,240,385,305,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][0]==1&&count1[1][1]==1&&count1[2][2]==1)
	 {
	     Rectangle1(170,80,235,150,2);
	     Rectangle1(245,160,310,230,2);
	     Rectangle1(320,240,385,305,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][2]==1&&count1[1][1]==1&&count1[2][0]==1)
	    {
	      Rectangle1(320,80,385,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player1();
	      goto end;
	    }

    //*******************Win Conditions For Second Player ***********
       else
	if(count2[0][0]==1&&count2[1][0]==1&&count2[2][0]==1) //1st column
	  {
	      Rectangle1(170,80,235,150,2);
	      Rectangle1(170,160,235,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player2();
	      goto end;
	    }
       else
	 if(count2[0][1]==1&&count2[1][1]==1&&count2[2][1]==1) //2nd column
	     {
	      Rectangle1(245,80,310,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(245,240,310,305,2);
	     win_player2();
	      goto end;
	     }
	else
	 if(count2[0][2]==1&&count2[1][2]==1&&count2[2][2]==1) //3rd column
	   {
	     Rectangle1(320,80,385,150,2);
	     Rectangle1(320,160,385,230,2);
	     Rectangle1(320,240,385,305,2);
	     win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][0]==1&&count2[0][1]==1&&count2[0][2]==1) //1st row
	 {
	   Rectangle1(170,80,235,150,2);
	   Rectangle1(245,80,310,150,2);
	   Rectangle1(320,80,385,150,2);
	   win_player2();
	    goto end;
	 }
	 else
	  if(count2[1][0]==1&&count2[1][1]==1&&count2[1][2]==1) //2nd row
	  {
	   Rectangle1(170,160,235,230,2);
	   Rectangle1(245,160,310,230,2);
	   Rectangle1(320,160,385,230,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[2][0]==1&&count2[2][1]==1&&count2[2][2]==1) //3rd row
	 {
	  Rectangle1(170,240,235,305,2);
	  Rectangle1(245,240,310,305,2);
	  Rectangle1(320,240,385,305,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][0]==1&&count2[1][1]==1&&count2[2][2]==1)
	 {
	     Rectangle1(170,80,235,150,2);
	     Rectangle1(245,160,310,230,2);
	     Rectangle1(320,240,385,305,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][2]==1&&count2[1][1]==1&&count2[2][0]==1)
	    {
	      Rectangle1(320,80,385,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player2();
	      goto end;
	    }
	 else
 //***************** Conditions For Draw ************************
	 if(arr[0][0]==1&&arr[0][1]==1&&arr[0][2]==1
	    &&arr[1][0]==1&&arr[1][1]==1&&arr[1][2]==1
	    &&arr[2][0]==1&&arr[2][1]==1&&arr[2][2]==1)
	  {
	     movement(5,5);

	     for(int i=22;i<557;i++)
	       {
		setcolor(4);
		settextstyle(10,0,4);
		outtextxy(i,389,"Þ");
		delay(5);
		}
		setcolor(10);
		settextstyle(8,0,4);
		outtextxy(120,400,"  Game has Drawn ");
		goto end;
	   }

      goto player2;
     }
   }

 player2:
 ////////////////////// Plying Conditions For Player 2 ///////////////////
  while(ch!=27)
   {

     setcolor(2);
     settextstyle(8,0,4);
     outtextxy(120,400,"First Player's Term");
     setcolor(1);
     settextstyle(8,0,4);
     outtextxy(120,400,"Second Player's Term");

   movement(x,y);
   ch=getche();
   if((ch==54)&&y<2&&y>=0)
   {
   y=y+1;
   }
     if((ch==52)&&y<=2&&y>0)
     {
     y=y-1;
     }

   if((ch==50)&&x<2&&x>=0)
   {
   x=x+1;
   }
   if((ch==56)&&x<=2&&x>0)
   {
   x=x-1;
   }
    if(ch==48&&arr[x][y]==0)
    {
      insert2(x,y);
      arr[x][y]=1;
      count2[x][y]=1;
      setcolor(10);
      settextstyle(8,0,4);

 //*************** Win Conditions For First Player ***********

       if(count1[0][0]==1&&count1[1][0]==1&&count1[2][0]==1) //1st column
	  {
	      Rectangle1(170,80,235,150,2);
	      Rectangle1(170,160,235,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player1();
	      goto end;
	    }
       else
	 if(count1[0][1]==1&&count1[1][1]==1&&count1[2][1]==1) //2nd column
	     {
	      Rectangle1(245,80,310,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(245,240,310,305,2);
	      win_player1();
	      goto end;
	     }
	else
	 if(count1[0][2]==1&&count1[1][2]==1&&count1[2][2]==1) //3rd column
	   {
	     Rectangle1(320,80,385,150,2);
	     Rectangle1(320,160,385,230,2);
	     Rectangle1(320,240,385,305,2);
	     win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][0]==1&&count1[0][1]==1&&count1[0][2]==1) //1st row
	 {
	   Rectangle1(170,80,235,150,2);
	   Rectangle1(245,80,310,150,2);
	   Rectangle1(320,80,385,150,2);
	   win_player1();
	    goto end;
	 }
	 else
	  if(count1[1][0]==1&&count1[1][1]==1&&count1[1][2]==1) //2nd row
	  {
	   Rectangle1(170,160,235,230,2);
	   Rectangle1(245,160,310,230,2);
	   Rectangle1(320,160,385,230,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[2][0]==1&&count1[2][1]==1&&count1[2][2]==1) //3rd row
	 {
	  Rectangle1(170,240,235,305,2);
	  Rectangle1(245,240,310,305,2);
	  Rectangle1(320,240,385,305,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][0]==1&&count1[1][1]==1&&count1[2][2]==1)
	 {
	     Rectangle1(170,80,235,150,2);
	     Rectangle1(245,160,310,230,2);
	     Rectangle1(320,240,385,305,2);
	      win_player1();
	      goto end;
	    }
	 else
	 if(count1[0][2]==1&&count1[1][1]==1&&count1[2][0]==1)
	    {
	      Rectangle1(320,80,385,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player1();
	      goto end;
	    }

  //*******************Win Conditions For Second Player ***********

       else
	if(count2[0][0]==1&&count2[1][0]==1&&count2[2][0]==1) //1st column
	  {
	      Rectangle1(170,80,235,150,2);
	      Rectangle1(170,160,235,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player2();
	      goto end;
	    }
       else
	 if(count2[0][1]==1&&count2[1][1]==1&&count2[2][1]==1) //2nd column
	     {
	      Rectangle1(245,80,310,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(245,240,310,305,2);
	      win_player2();
	      goto end;
	     }
	else
	 if(count2[0][2]==1&&count2[1][2]==1&&count2[2][2]==1) //3rd column
	   {
	     Rectangle1(320,80,385,150,2);
	     Rectangle1(320,160,385,230,2);
	     Rectangle1(320,240,385,305,2);
	     win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][0]==1&&count2[0][1]==1&&count2[0][2]==1) //1st row
	 {
	   Rectangle1(170,80,235,150,2);
	   Rectangle1(245,80,310,150,2);
	   Rectangle1(320,80,385,150,2);
	   win_player2();
	    goto end;
	 }
	 else
	  if(count2[1][0]==1&&count2[1][1]==1&&count2[1][2]==1) //2nd row
	  {
	   Rectangle1(170,160,235,230,2);
	   Rectangle1(245,160,310,230,2);
	   Rectangle1(320,160,385,230,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[2][0]==1&&count2[2][1]==1&&count2[2][2]==1) //3rd row
	 {
	  Rectangle1(170,240,235,305,2);
	  Rectangle1(245,240,310,305,2);
	  Rectangle1(320,240,385,305,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][0]==1&&count2[1][1]==1&&count2[2][2]==1)
	 {
	     Rectangle1(170,80,235,150,2);
	     Rectangle1(245,160,310,230,2);
	     Rectangle1(320,240,385,305,2);
	      win_player2();
	      goto end;
	    }
	 else
	 if(count2[0][2]==1&&count2[1][1]==1&&count2[2][0]==1)
	    {
	      Rectangle1(320,80,385,150,2);
	      Rectangle1(245,160,310,230,2);
	      Rectangle1(170,240,235,305,2);
	      win_player2();
	      goto end;
	    }
	 else
 //***************** Conditions For Draw ************************

	 if(arr[0][0]==1&&arr[0][1]==1&&arr[0][2]==1
	    &&arr[1][0]==1&&arr[1][1]==1&&arr[1][2]==1
	    &&arr[2][0]==1&&arr[2][1]==1&&arr[2][2]==1)
	   {
	       movement(5,5);
	     for(int i=22;i<557;i++)
	       {
		setcolor(4);
		settextstyle(10,0,4);
		outtextxy(i,389,"Þ");
		delay(5);
	       }
		setcolor(10);
		settextstyle(8,0,4);
		outtextxy(120,400,"  Game has Drawn ");
	    }
      goto player1;
	 }
       }
  end:
    getch();
    goto top;
    getch();
    closegraph();
     }  //End main
 ////////////////////////////  End Of Main Function ///////////////////////

 //************************ Start Of Function Definations ***************

 //** To Design small squre Rectangular Box ie 'Rectangle Within A Rectangle'

  void Rectangle(int x1,int y1,int x2,int y2,int col1)
       {
       setcolor(0);
       setfillstyle(1,0);
       rectangle(x1+7,y1+7,x2-7,y2-7);
       floodfill(x1+10,y1+10,0);
       setcolor(10);
       rectangle(x1,y1,x2,y2);
       rectangle(x1+7,y1+7,x2-7,y2-7);
       }

 //************* Rectangles To Design Selected portions

  void Rectangle1(int x1,int y1,int x2,int y2,int col1)
       {
       setcolor(col1);
       for(int n=1;n<7;n++)
       rectangle(x1+n,y1+n,x2-n,y2-n);
       }

//************************  Function For Selected Rectangle  ***************

    void movement(int x,int y)
    {
    int col1,col2;
	col1=2;
	col2=1;
    if(x==0&&y==0)
    Rectangle1(170,80,235,150,col1);
    else
    Rectangle1(170,80,235,150,col2);
    if(x==0&&y==1)
    Rectangle1(245,80,310,150,col1);
    else
    Rectangle1(245,80,310,150,col2);
    if(x==0&&y==2)
    Rectangle1(320,80,385,150,col1);
    else
    Rectangle1(320,80,385,150,col2);
    if(x==1&&y==0)
    Rectangle1(170,160,235,230,col1);
    else
    Rectangle1(170,160,235,230,col2);
    if(x==1&&y==1)
    Rectangle1(245,160,310,230,col1);
    else
    Rectangle1(245,160,310,230,col2);
    if(x==1&&y==2)
    Rectangle1(320,160,385,230,col1);
    else
    Rectangle1(320,160,385,230,col2);
    if(x==2&&y==0)
    Rectangle1(170,240,235,305,col1);
    else
    Rectangle1(170,240,235,305,col2);
    if(x==2&&y==1)
    Rectangle1(245,240,310,305,col1);
    else
    Rectangle1(245,240,310,305,col2);
    if(x==2&&y==2)
    Rectangle1(320,240,385,305,col1);
    else
    Rectangle1(320,240,385,305,col2);
    }

  //****************** Function For '-' Sign Called Tic

  void Tick1(int x,int y)
      {
      setcolor(10);
      settextstyle(10,0,4);
      outtextxy(x,y,"-");
       }
 //******************* Function For '+' Sign Called cross

  void Tick2(int x,int y)
      {
      setcolor(10);
      settextstyle(10,0,4);
      outtextxy(x,y,"+");
      }

//***** Insertion Of '-'Sign When Enter is Pressed By Player 1.***********

    void insert1(int x,int y)
       {
	  if(x==0&&y==0)
	  Tick1(192,77);
	  if(x==0&&y==1)
	  Tick1(266,77);
	  if(x==0&&y==2)
	  Tick1(340,77);
	  if(x==1&&y==0)
	  Tick1(192,155);
	  if(x==1&&y==1)
	  Tick1(266,155);
	  if(x==1&&y==2)
	  Tick1(340,155);
	  if(x==2&&y==0)
	  Tick1(192,233);
	  if(x==2&&y==1)
	  Tick1(266,233);
	  if(x==2&&y==2)
	  Tick1(340,233);
       }


//***** Insertion Of '+'Sign When Ins Button is Pressed By Player 2.*******

   void insert2(int x,int y)
       {
	  if(x==0&&y==0)
	  Tick2(192,77);
	  if(x==0&&y==1)
	  Tick2(266,77);
	  if(x==0&&y==2)
	  Tick2(340,77);
	  if(x==1&&y==0)
	  Tick2(192,155);
	  if(x==1&&y==1)
	  Tick2(266,155);
	  if(x==1&&y==2)
	  Tick2(340,155);
	  if(x==2&&y==0)
	  Tick2(192,233);
	  if(x==2&&y==1)
	  Tick2(266,233);
	  if(x==2&&y==2)
	  Tick2(340,233);
       }

 //**************Instruction Page Accessable From main Menue Options

  void instructions()
     {
	 cleardevice();
	 setbkcolor(0);
	 setcolor(2);
	 settextstyle(10,0,1);
	 outtextxy(200,10,"INSTRUCTIONS");
     int a1x=4,b1y=4,a2x=615,b2y=469;
     for(int zafar1=1;zafar1<4;zafar1++)
	 {
	 setcolor(9);
	 rectangle(++a1x,++b1y,--a2x,--b2y);
	 }
	 setcolor(7);
	 rectangle(3,3,616,470);
	 rectangle(10,10,609,463);
	 setcolor(4);
	 line(200,50,400,50);
	 line(200,52,400,52);
	 setcolor(2);
	 settextstyle(8,0,3);
	 outtextxy(30,70,"Player 1 :");
	 settextstyle(8,0,1);
	 setcolor(7);
	 outtextxy(80,110,"1-Use Arrow Keys To Select A box. ");
	 outtextxy(80,150,"2-Use Enter Button To insert tick on selected box. ");
	 setcolor(4);
	 outtextxy(80,200,"               ***************");
	 setcolor(2);
	 settextstyle(8,0,3);
	 outtextxy(30,250,"Player 2 :");
	 settextstyle(8,0,1);
	 setcolor(7);
	 outtextxy(80,290,"1-Use Numeric Arrow Keys To Select A box. ");
	 outtextxy(80,330,"2-Use Numeric Ins Button To insert Cross on");
	 outtextxy(80,370,"   selected box. ");
	 setcolor(4);
	 outtextxy(80,410,"               ***************");
     }

  //********* Winning Message For Player 1

  void win_player1()
    {
    for(int i=22;i<557;i++)
       {
	setcolor(4);
	settextstyle(10,0,4);
	outtextxy(i,389,"Þ");
	delay(5);
	}
	setcolor(10);
	settextstyle(8,0,4);
	outtextxy(100,400,"First Player is Winner");
     }

  //********* Winning Message For Player 2

  void win_player2()
    {
     for(int i=22;i<557;i++)
       {
	setcolor(4);
	settextstyle(10,0,4);
	outtextxy(i,389,"Þ");
	delay(5);
	}
	 setcolor(10);
	 settextstyle(8,0,4);
	 outtextxy(100,400,"Second Player is Winner");
     }

 //************ First Page (Intro)

 void Intro()
    {
    int za1x=4,zb1y=4,za2x=615,zb2y=469;
    for(int zafar1=1;zafar1<4;zafar1++)
       {
	setcolor(9);
	rectangle(++za1x,++zb1y,--za2x,--zb2y);
	}
	setcolor(7);
	rectangle(3,3,616,470);
	rectangle(10,10,609,463);
	setcolor(4);
	settextstyle(7,0,5);
	outtextxy(100,260,"PROGRAMMED BY");
	setcolor(14);
	settextstyle(7,0,7);
	outtextxy(50,312,"M");
	setcolor(2);
	settextstyle(7,0,6);
	outtextxy(129,323,"r.");
	setcolor(4);
	outtextxy(162,323," ");
	setcolor(14);
	outtextxy(198,323,"T");
	setcolor(2);
	outtextxy(233,323,"A");
	setcolor(4);
	outtextxy(266,323,"P");
	setcolor(14);
	outtextxy(325,323,"A");
	setcolor(2);
	outtextxy(362,323,"S");
	setcolor(4);
	outtextxy(395,323,"(");
	setcolor(14);
	outtextxy(433,323,"T");
	setcolor(2);
	outtextxy(469,323,"C");
	setcolor(14);
	outtextxy(505,323,")");
  int i,j,col,counter,c1=2,c2=40,f=0;
  while(!kbhit())
   {
   counter++;
   i=160,j=30;
   setcolor(col);
   settextstyle(7,0,6);
   outtextxy(i+=30,j,"T");
   setcolor(col+1);
   outtextxy(i+=30,j,"I");
   setcolor(col+2);
   outtextxy(i+=30,j,"C");
   setcolor(col+3);
   outtextxy(i+=60,j,"T");
   setcolor(col+4);
   outtextxy(i+=30,j,"A");
   setcolor(col+5);
   outtextxy(i+=40,j,"C");
   j=100;
   i=140;
   settextstyle(7,0,4);
   setcolor(col+6);
   outtextxy(i+=90,j,"G");
   setcolor(col+7);
   outtextxy(i+=30,j,"A");
   setcolor(col+8);
   outtextxy(i+=30,j,"M");
   setcolor(col+9);
   outtextxy(i+=30,j,"E");

     if(c1<=40)
     {
     delay(150);
     setcolor(2);
     circle(300,200,c1);
     c1+=2;
     }
   else
     {
     delay(150);
     setcolor(4);
     circle(300,200,c2);
     c2-=2;
      }
      if(c2<=0)
	{
	c1=2;
	c2=40;
	 }
      col++;

      } //End While
      getch();
   }//End Function Body


 ////////////////////////////////////////////////////////////////////////

 //****************************  End Of Prgrame *************************

 ////////////////////////////////////////////////////////////////////////