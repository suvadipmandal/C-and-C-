#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int gd=0,gm;
 struct time t;
 initgraph(&gd,&gm,"..\\bgi");
 char s[60][3]={"00","01","02","03","04","05","06","07","08","09","10",
 "11","12","13","14","15","16","17","18","19","20","21","22","23","24","25",
 "26","27","28","29","30","31","32","33","34","35","36","37","38","39","40",
 "41","42","43","44","45","46","47","48","49","50","51","52","53","54",
 "55","56","57","58","59"};
 while(!kbhit())
  {
  gettime(&t);
  settextstyle(1,0,15);
  outtextxy(10,100,s[t.ti_hour]);
  outtextxy(160,90,":");
  outtextxy(170,100,s[t.ti_min]);
  outtextxy(320,90,":");
  setcolor(RED);
  outtextxy(340,100,s[t.ti_sec]);
  setcolor(BLACK);
  delay(100);
  outtextxy(340,100,s[t.ti_sec]);
  settextstyle(1,0,15);
  outtextxy(10,100,s[t.ti_hour]);
  outtextxy(160,90,":");
  outtextxy(170,100,s[t.ti_min]);
  outtextxy(320,90,":");
  setcolor(WHITE);
  }
 getch();
 closegraph();
 }