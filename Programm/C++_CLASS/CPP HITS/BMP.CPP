//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include <alloc.h>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#define UL unsigned long
#define UI unsigned int
#define UC unsigned char
//+-+-+-+-+-+-+-+-+-+-+-+-+-+< BMP Structures >+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
typedef struct
{
	char Type[2];
	UL Size;
	UI R1;
	UI R2;
	UL OffSet;
}BMP1;
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
typedef struct
{
	UL headsize;
	UL Hlen;
	UL Vlen;
	UI planes;
	UI BPP;
	UL Method;
	UL BmpSize;
	UL HRes;
	UL VRes;
	UL Colors;
	UL IColors;
}BMP2;
//+-+-+-+-+-+-+-+-+-+-+-+-+-< Display BMP >+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
int ShowBMP(int x, int y, char* FileName)
{
	  int b,a;
	  BMP1 Obj1;
	  BMP2 Obj2;
	  UC * Holder;
	  int in=0;
	  UC c=0;
	  FILE * fp;

	  fp = fopen(FileName,"rb");
	  if(fp==NULL)
		  return 0;
	  fread(&Obj1, sizeof(Obj1), 1, fp);
	  fread(&Obj2, sizeof(Obj2), 1, fp);
	  if(Obj2.BPP!=4)  // This isn't a 16 color bmp we can read;
	  {
		fclose(fp);
		return 0;
	  };
	  fseek(fp,Obj1.OffSet,SEEK_SET);
	  Holder=(UC *) calloc(Obj2.Hlen/2+1, sizeof(UC));
	  for(b=Obj2.Vlen;b>=0;b--)
	  {
		fread(Holder, sizeof(UC), Obj2.Hlen/2, fp);
		c=0;
		in=0;
		for(a=0;a<=Obj2.Hlen;a+=2)
		{
		    c = (Holder[in] | 0x00) >>4;
		    putpixel(a+x,b+y,c);
		    c = (Holder[in] | 0xF0) & 0x0F;
		    putpixel(a+1+x,b+y,c);
		    in++;
		}
	  }
	  free (Holder);
	  fclose(fp);
	  return 1;
}
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-< **** >+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
// Two bmp demo.bmp & demo1.bmp are provided.
// open these bmp in windows paint & change.(do not change size of bmp)
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-< Main >+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
void main()
{
 int color,D=DETECT,E;
// registerfarbgidriver(EGAVGA_driver_far);
 initgraph(&D,&E,"..\\bgi");
 E=0;
 if(!ShowBMP(0,0,"tapas.bmp")) E=1;
 getch();
 closegraph();
 if(E) printf("\nError : Unable to open file.");
 else printf("Sucess !");
}
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
