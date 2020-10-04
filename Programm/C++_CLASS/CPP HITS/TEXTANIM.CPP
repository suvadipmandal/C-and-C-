#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <graphics.h>

void main(){
     int gdriver = DETECT, gmode, errorcode;

     char arr[30]="Tapas Chakraborty";
     int i;

     initgraph(&gdriver,&gmode,"..\\bgi");


     ///code as space holder\\
	   setcolor(YELLOW);
	   settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	   outtextxy(50,200,"Text Animations");
	   setcolor(LIGHTGREEN);
	   outtextxy(50,260,"URL : www.*********.com");
	   outtextxy(50,280,"Email : tamanna_aniket@rediffmail.com");
     ///code as space holder\\


     settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
     for(i=0;arr[i]!='\0';i++){
	delay(100);
	setcolor(i+5);
	outtextxy(i+1,i-1,arr);
	}

     while(i>0){
     i--;
     delay(100);
     setcolor(i-5);
     outtextxy(i-5,i+1,arr);
     }


 getch();
     closegraph();
}
