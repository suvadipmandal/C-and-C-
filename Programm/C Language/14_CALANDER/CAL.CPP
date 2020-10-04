#include<stdio.h>
#include<conio.h>

int get_1st_weekday(int year)
{
return ((((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7)+1;
}

void main()
{
 _setcursortype(_NOCURSOR);
 char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug",
		"Sep","Oct","Nov","Dec"};
 int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
 clrscr();
 int year,month=0,day,daysInMonth,weekDays=0,startingDay;
 char ch;
 printf("Enter your Desired year :");
 scanf("%d",&year);

 if((year%4==0&&year%100!=0)||year%400==0)
 monthDay[1]=29;

 startingDay=get_1st_weekday(year);

 while(1)
 {
 clrscr();
 gotoxy(30,8);
 daysInMonth=monthDay[month];
 printf("\n");
 for(int j=0;j<6;j++)
 {
 if(j==3)
 printf("%s",months[month]);
 printf("========");
 }
 printf("\n\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
 for(weekDays=0;weekDays<startingDay;weekDays++)
 printf("\t");
 for(day=1;day<=daysInMonth;day++)
 {

  printf("%3d\t",day);

  if(++weekDays>6)
  {
  weekDays=0;
  printf("\n");
  }
  startingDay=weekDays;
 }
 ch=getch();

 if(ch==69||ch==101)
 break;

 if(ch==77||ch==13)
 {
  month++;
  if(month==12)
  month=0;
 }
 if(ch==75)
 {
  if(month==0)
  month=12;
  month--;
 }

 }
 getch();
}