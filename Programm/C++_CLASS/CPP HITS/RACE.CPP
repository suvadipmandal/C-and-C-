#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<graphics.h>

/*****************************DEFINE *********************************/
#define ENTER 13
#define SPACE 32
#define BACK 8
#define ESC 0x1b
#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

/******************************Decleration***********************************/

int movex,movey,speed,score;
int barl,barw;
int anymovex,anymovey;
int anymovex1,anymovey1;
int chance,any,level,winner;
char control;

void play();
void drawbar();
void drawu(int ,int);
void drawany();
void drawany1();
void drawscore();
void drawcontrol();
void drawchance();
void one();
void two();
void three();
void speedplus();
void drawlevel();
void drawwinner();

/**********************************Main Started*****************************/
void main()
{
//int driver,mode;
//driver=DETECT;
//initgraph(&driver,&mode,"\\tc\\bgi");
//setbkcolor(0);
//closegraph();
delay(1000);
for(int move=20;move>=10;move--)
{
clrscr();
textmode(BW40);
textcolor(move);
gotoxy(18,move);cprintf("€");
gotoxy(17,move+1);cprintf("‹‹‹");
gotoxy(18,move+2);cprintf("€");
gotoxy(17,move+3);cprintf("‹‹‹");
textcolor(9);
gotoxy(9,move+5);cprintf("Race Game By Pratik Kumar");
delay(300);
sound(2500);
delay(10);
nosound();
}
getch();
clrscr();
score=0;
movex=18;
movey=17;
anymovex=16;
anymovey=2;
chance=3;
level=1;
speed=50;
any=1;
anymovex1=25;
anymovey1=3;
winner=0;
	int a=200;
	textmode(BW40);
	textcolor(4);

	gotoxy(13,10);cprintf("Please wait...");
	gotoxy(11,11);cprintf("Play a Race Game");
	gotoxy(5,12);cprintf("Presented By Pratik Kumar");
	textcolor(6);
	gotoxy(1,23);cprintf("Press any key to continue:");
	sound(1050);	delay(a);
	sound(1100);	delay(a);
	sound(1250);	delay(a);
	sound(1250);	delay(a);
	sound(1100);	delay(a);
	sound(1050);	delay(a);
	sound(1050);	delay(a);
	sound(1100);	delay(a);
	sound(1250);	delay(a);

	nosound();
	getch();
 clrscr();
play();
getch();
}
void play()
{
drawbar();
drawcontrol();
drawu(movex,movey);
drawany();
drawany1();
drawscore();
drawchance();
}
void drawbar()
{
textmode(BW40);
textcolor(4);
for(barl=13,barw=2;barw<=20;barw++)
{
gotoxy(barl,barw);cprintf("!");
}
for(barl=27,barw=2;barw<=20;barw++)
{
gotoxy(barl,barw);cprintf("!");
}
for(barl=14,barw=21;barl<=27;barl++)
{
gotoxy(barl,barw);cprintf("*");
}
}

void drawu(int youx,int youy)
{
textcolor(2);
gotoxy(youx,youy);cprintf("€");
gotoxy(youx-1,youy+1);cprintf("‹‹‹");
gotoxy(youx,youy+2);cprintf("€");
gotoxy(youx-1,youy+3);cprintf("‹‹‹");
}
void drawcontrol()
{
if(kbhit())
{
textcolor(0);
gotoxy(movex,movey);cprintf("€");
gotoxy(movex-1,movey+1);cprintf("‹‹‹");
gotoxy(movex,movey+2);cprintf("€");
gotoxy(movex-1,movey+3);cprintf("‹‹‹");

gotoxy(0,0);control=getche();
if(control==LEFT&&movex>=16)
{
--movex;
}
else if(control==RIGHT&&movex<=24)
{
++movex;
}
else if(control==ESC)
{
exit(0);
}
else
{
play();
}
}
}


void drawany()
{
if(anymovey<=19)
{
++anymovey;
textcolor(4);
gotoxy(anymovex,anymovey);cprintf("€");
gotoxy(anymovex-1,anymovey-1);cprintf("‹‹‹");
gotoxy(anymovex,anymovey-2);cprintf("€");
gotoxy(anymovex-1,anymovey-3);cprintf("‹‹‹");
nosound();
delay(speed);

textcolor(0);
gotoxy(anymovex,anymovey);cprintf("€");
gotoxy(anymovex-1,anymovey-1);cprintf("‹‹‹");
gotoxy(anymovex,anymovey-2);cprintf("€");
gotoxy(anymovex-1,anymovey-3);cprintf("‹‹‹");
}
else
{
anymovey=2;
score=score+50;
++any;
if(any==1)
{
anymovex=anymovex;
}
else if(any==2)
{
anymovex=20;
}
else if(any==3)
{
anymovex==25;
}
else if(any==4)
{
anymovex=15;
}
else
anymovex=25;
}
}

void drawany1()
{
if(anymovey1<=19)
{
++anymovey1;
textcolor(4);
gotoxy(anymovex1,anymovey1);cprintf("€");
gotoxy(anymovex1-1,anymovey1-1);cprintf("‹‹‹");
gotoxy(anymovex1,anymovey1-2);cprintf("€");
gotoxy(anymovex1-1,anymovey1-3);cprintf("‹‹‹");
sound(1250);	delay(10);
sound(1100);	delay(10);
nosound();
delay(speed);

textcolor(0);
gotoxy(anymovex1,anymovey1);cprintf("€");
gotoxy(anymovex1-1,anymovey1-1);cprintf("‹‹‹");
gotoxy(anymovex1,anymovey1-2);cprintf("€");
gotoxy(anymovex1-1,anymovey1-3);cprintf("‹‹‹");
}
else
{
anymovey1=2;
score=score+50;
if(any==1)
{
anymovex1=anymovex1;
}
else if(any==2)
{
anymovex1=25;
}
else if(any==3)
{
anymovex1==17;
}
else if(any==4)
{
anymovex1=15;
}
else
anymovex1=20;
}
}

void drawscore()
{
while(anymovey==movey)
{
if (anymovex==movex||anymovex==movex-1||anymovex==movex-2||anymovex-1==movex-3||anymovex-2==movex-2||anymovex-3==movex-1||anymovex-3==movex-3||anymovex-2==movex-2||anymovex-1==movex-1||anymovex1==movex||anymovex1==movex-1||anymovex1==movex-2||anymovex1-1==movex-3||anymovex1-2==movex-2||anymovex1-3==movex-1||anymovex1-3==movex-3||anymovex1-2==movex-2||anymovex1-1==movex-1)
{
textcolor(2);
gotoxy(15,24);cprintf("Sorry!!");
	 int a=100;
	sound(1250);	delay(a);
	sound(1100);	delay(a);
	sound(1050);	delay(a);
	sound(1050);	delay(a);
	sound(1100);	delay(a);
	sound(1250);	delay(a);
	sound(1050);	delay(a);
	sound(1100);	delay(a);
	sound(1250);	delay(a);
	sound(1250);	delay(a+320);
	sound(1100);	delay(a+320);
	sound(1050);	delay(a+1000);
	nosound();
	--chance;
	anymovey=2;
	play();
}
else
goto score;
}
score:
textcolor(2);
gotoxy(15,23);cprintf("Score :");
gotoxy(24,23);cout<<score;
}

void drawchance()
{
while(chance!=0)
{

if(chance==1)
{
one();
}
else if(chance==2)
{
one();
two();
}
else if(chance==3)
{
one();
two();
three();
}

gotoxy(5,4);cout<<chance;
speedplus();
}
clrscr();
gotoxy(13,15);cprintf("Game Over");
sleep(2);
exit(0);
}

void one()
{
//textmode(BW80);
textcolor(3);
gotoxy(5,5);cprintf("€");
gotoxy(5-1,5+1);cprintf("‹‹‹");
gotoxy(5,5+2);cprintf("€");
gotoxy(5-1,5+3);cprintf("‹‹‹");

textcolor(0);
gotoxy(5,15);cprintf("€");
gotoxy(5-1,15+1);cprintf("‹‹‹");
gotoxy(5,15+2);cprintf("€");
gotoxy(5-1,15+3);cprintf("‹‹‹");

textcolor(0);
gotoxy(5,10);cprintf("€");
gotoxy(5-1,10+1);cprintf("‹‹‹");
gotoxy(5,10+2);cprintf("€");
gotoxy(5-1,10+3);cprintf("‹‹‹");

}


void two()
{
//textmode(BW80);
textcolor(3);
gotoxy(5,10);cprintf("€");
gotoxy(5-1,10+1);cprintf("‹‹‹");
gotoxy(5,10+2);cprintf("€");
gotoxy(5-1,10+3);cprintf("‹‹‹");

textcolor(0);
gotoxy(5,15);cprintf("€");
gotoxy(5-1,15+1);cprintf("‹‹‹");
gotoxy(5,15+2);cprintf("€");
gotoxy(5-1,15+3);cprintf("‹‹‹");
}
void three()
{
//textmode(BW80);

textcolor(3);
gotoxy(5,15);cprintf("€");
gotoxy(5-1,15+1);cprintf("‹‹‹");
gotoxy(5,15+2);cprintf("€");
gotoxy(5-1,15+3);cprintf("‹‹‹");
textcolor(3);
gotoxy(5,5);cprintf("€");
gotoxy(5-1,5+1);cprintf("‹‹‹");
gotoxy(5,5+2);cprintf("€");
gotoxy(5-1,5+3);cprintf("‹‹‹");
textcolor(3);
gotoxy(5,10);cprintf("€");
gotoxy(5-1,10+1);cprintf("‹‹‹");
gotoxy(5,10+2);cprintf("€");
gotoxy(5-1,10+3);cprintf("‹‹‹");
}

void speedplus()
{
if(score>=600)
{
clrscr();
gotoxy(13,15);cprintf("LEVEl Completed");
sleep(1);
score=0;
level++;
winner++;
any=1;
anymovex=17;
anymovey=3;
speed=speed-10;
play();
}
drawlevel();
drawwinner();
}

void drawlevel()
{
gotoxy(29,5);cprintf("Level");
cout<<level;
}
void drawwinner()
{
while(winner>=5)
{
clrscr();
textcolor(7);
gotoxy(5,15);cprintf("!!!!!!!!!Good Well Done!!!!!!!!!!!");
sleep(3);
getch();
exit(0);
}
play();
}

