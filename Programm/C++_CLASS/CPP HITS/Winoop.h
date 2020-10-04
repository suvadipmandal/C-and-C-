
class textbox
{
private:
	int x,y,length,mousex,mousey,button;
	char far *cursor,ch;
public:
	char text[100];
   textbox()
   {text[0]='\0';}
   void make(int xx,int yy,int ll)
   {
	x=xx,y=yy,length=ll;
	setlinestyle(0,1,3);
      setcolor(WHITE);
	rectangle(x,y,x+length,y+24);
	setfillstyle(1,GREEN);
	floodfill(x+4,y+4,WHITE);	
   }
   void write(char *mess)
   {
	strcpy(text,mess);
	settextjustify(0,2);
	setviewport(x+3,y+3,x+length-3,y+20,1);
	clearviewport();
	setviewport(0,0,getmaxx(),getmaxy(),1);
	setfillstyle(1,GREEN);
	floodfill(x+4,y+4,WHITE);
	outtextxy(x+8,y+8,text);
   }
   void append(char *mess)
   {
	strcat(text,mess);
	write(text);
   }
   void click()
   {
	int curx=x+8;
	getmouse(&button,&mousex,&mousey);
	if(mousex>x&&mousey>y&&mousex<x+length&&mousey<y+16&&button==1)
	{
	   hidemouse();
	   setlinestyle(0,1,1);
	   cursor=new char[50];
	   rectangle(0,0,8,2);
	   setfillstyle(1,WHITE);
	   floodfill(1,1,WHITE);
	   getimage(0,0,8,2,cursor);
	   for(int i=0;;i++)
	   {
		putimage(curx,y+16,cursor,COPY_PUT);
		while(!kbhit())
		   ;
		ch=getch();
		if(ch=='\r')
		   break;
		if(ch=='\b')
		{
		   text[i-1]='\0';
		   write(text);
		   curx-=16;
		   i-=2;
		}
		else
		{
		   text[i]=ch;
		   text[i+1]='\0';
		   write(text);
		}
		curx+=8;
	   }
	   write(text);
	   delete []cursor;
	   showmouse();
	}
   }
};


class button
{
private:
	int x,y,length,button,mousex,mousey;
	char message[250];
	char far *image;
public:
   void make(int xx,int yy,char mess[250])
   {
	setcolor(CYAN);
	strcpy(message,mess);
	x=xx,y=yy;
	length=strlen(message)*8;
	setlinestyle(0,1,3);
	rectangle(x,y,x+length,y+32);
	setfillstyle(1,BLUE);
	floodfill(x+4,y+4,CYAN);
	settextjustify(1,1);
	outtextxy(x+(length/2),y+16,message);
	setlinestyle(0,1,1);
   }
   int click()
   {
	getmouse(&button,&mousex,&mousey);
	if(mousex>x&&mousex<x+length&&mousey>y&&mousey<y+32&&button==1)
	{
	   hidemouse();
	   image=new char[imagesize(x,y,x+length,y+32)];
	   getimage(x,y,x+length,y+32,image);
	   putimage(x,y,image,NOT_PUT);
	   while(button==1)
		getmouse(&button,&mousex,&mousey);
	   putimage(x,y,image,COPY_PUT);
	   showmouse();
	   delete []image;
	   return 1;
	}
	return 0;
   }
};

void msgbox(char message[250])
{
   int length,x,y;
   button _b;
   char far *simage;
   setcolor(GREEN);
   length=strlen(message)*8+32;
   simage=new char[imagesize(300-(length/2),168,300+(length/2),272)];
   hidemouse();
   getimage(300-(length/2),168,300+(length/2),272,simage);
   setviewport(300-(length/2),168,300+(length/2),272,1);
   clearviewport();
   setviewport(0,0,getmaxx(),getmaxy(),1);
   rectangle(300-(length/2),168,300+(length/2),272);
   setfillstyle(1,DARKGRAY);
   floodfill(300,169,GREEN);
   settextjustify(1,1);
   outtextxy(300,200,message);
   _b.make(284,232," OK ");
   showmouse();
   while(!_b.click())
	;
   hidemouse();
   putimage(300-(length/2),168,simage,COPY_PUT);
   delete []simage;
   showmouse();
}

/*void main()
{
   int gd=0,gm,mousex,mousey,button;
   class button b,b1;
   class textbox t;
   initgraph(&gd,&gm,"");
   initmouse();
   showmouse();
   t.make(0,400,160);
   b.make(0,0,"Let me go out of here");
   b1.make(200,200," My name is Niloy ");
   t.write("Niloy Mondal");
   while(!kbhit())
   {
	gotoxy(65,1);
	getmouse(&button,&mousex,&mousey);
	cout<<mousex<<","<<mousey<<"    ";
	if(b.click())
	{
	   msgbox("Niloy Mondal!!!!!!!!");
	   break;
	}
	if(b1.click())
	   msgbox("Look into my eyes");
	t.click();
   }
} */