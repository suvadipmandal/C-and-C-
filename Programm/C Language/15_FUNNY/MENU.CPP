#include<stdio.h>
#include<conio.h>
void main()
{
  char menu[6][8]={"Chagol","Pagol","Bhoot","Petni","Handa","vonda"};
  int i,p=0;
  char x;
  clrscr();
  while(1)
  {
   for(i=0;i<6;++i)
   {
    if(i==p)
    {
     textcolor(YELLOW);
     textbackground(GREEN);
    }
    else
    {
     textcolor(WHITE);
     textbackground(0);
    }
   gotoxy(10,i+2);
   cprintf("%s",menu[i]);
   }
  x=getch();
  if(x=='u'||x=='U'||x==72)
  {
  --p;
  if(p>5)
  p=0;
  }
  if(x==13)
  break;
  }
printf("You selection is :%s",menu[p]);
getch();
}