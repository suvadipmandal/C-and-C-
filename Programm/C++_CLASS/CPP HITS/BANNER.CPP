//Text Animation in Graphics Screen
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <string.h>

class Banner
{
   char *str,ch;
   public:

   //Constructor is here of no use...
   Banner(){
       str="Programmed by : TC ";
   }
   void scroll();
   void alternate();
   void anim1();
};

void  Banner :: scroll(){
      int i,j,location,n,c=10;
      strcpy(str,"           ***** T.C.           ");
      for(i=0;!kbhit();i++){
	  //   cleardevice();
	  /********For Clearing Part of Screen by Drawing Lines*/
	     setfillstyle(SOLID_FILL,BLACK);
	     bar(50,50,600,90);
	   /////multicolor banner
	   if(c==14)
	     c=10;
	   else
	     c++;
	   setcolor(c);
	   //////
	   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	   outtextxy(50,50,str);
	   delay(350);
	   ch = str[0];
	   //////substring logic
	   n=strlen(str);
	   location=0;
	   for(j=location;j<n;j++){
		 str[j] = str[j+1];
	   }
	   ///appending char at end
	   str[n-1]=ch;
	   str[n]=NULL;
      }
}


void  Banner :: alternate(){
      int i,j,c=10,flag=0;
      strcpy(str,"Website : www.***********.*******.***");
      for(i=0;!kbhit();){
	   /********For Clearing Part of Screen by Drawing Lines*/
	     setfillstyle(SOLID_FILL,BLACK);
	     bar(50,200,600,240);
	   /////multicolor banner
	   if(c==14)
	     c=10;
	   else
	     c++;
	   setcolor(c);
	   //////
	   settextstyle(SMALL_FONT,HORIZ_DIR,6);
	   if(flag==0){
	       i++;
	       if(i==200)  flag=1;  //Extreme Right
	   }
	   else{
	      i--;
	      if(i==0) flag=0;   //Extreme Left
	    }
	   outtextxy(50+i,200,str);
	   delay(5);
      }
}




void main(){
   int gd=DETECT,gm;
   Banner obj;

   initgraph(&gd,&gm,"..\\bgi");

   ////////Code Just as space holder\\\\\\\\\\\\\\\
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
   setcolor(YELLOW);
   outtextxy(200,5,"Text Animations");
   setcolor(RED);
   outtextxy(50,320,"Download More and More @ ...");
   setcolor(LIGHTGREEN);
   outtextxy(50,350,"URL : www.//////////.////////.//////");
   outtextxy(50,380,"Email : **********.********.********");
   setcolor(RED);
   outtextxy(50,430,"Press any key to continue...");
   ////////Code Just as space holder\\\\\\\\\\\\\\\

   obj.scroll();
   getch();


   obj.alternate();
   getch();

   closegraph();
}

