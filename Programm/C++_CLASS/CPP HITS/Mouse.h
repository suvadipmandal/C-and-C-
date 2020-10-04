

#include<dos.h>

void initmouse()
{
	_AX=0;
	geninterrupt(0x33);
}

void showmouse()
{
	_AX=1;
	geninterrupt(0x33);
}

void hidemouse()
{
	_AX=2;
	geninterrupt(0x33);
}

void restrictmouse(int x1,int y1,int x2,int y2)
{
	_AX=7;
	_CX=x1;
	_DX=x2;
	geninterrupt(0x33);
	_AX=8;
	_CX=y1;
	_DX=y2;
	geninterrupt(0x33);
}

void getmouse(int *button,int *x,int *y)
{
	_AX=3;
	geninterrupt(0x33);
	*button=_BX;
	*x=_CX;
	*y=_DX;
}

void setmouse(int x,int y)
{
	_AX=4;
	_CX=x;
	_DX=y;
	geninterrupt(0x33);
}


