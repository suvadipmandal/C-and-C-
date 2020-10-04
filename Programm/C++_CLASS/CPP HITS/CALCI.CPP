

#include<conio.h>
#include<mouse.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<winoop.h>

void main()
{
   int gd=0,gm,i,j,answer,flag=0,k;
   char prev='1',current,*ch;
   char *nums[]={" 1 "," 2 "," 3 "," 4 "," 5 "," 6 "," 7 "," 8 "," 9 "," 0 "};
   char *num[]={"1","2","3","4","5","6","7","8","9","0"};
   initgraph(&gd,&gm,"..\\bgi");
   button b[10],add,sub,exit,equal,mul,div,ac;
   textbox t;
   initmouse();
   showmouse();
   t.make(150,50,160);
   for(i=0,j=100;i<10;i++,j+=40)
	b[i].make(j,100,nums[i]);
   add.make(100,150," + ");
   sub.make(140,150," - ");
   equal.make(260,150," = ");
   mul.make(180,150," * ");
   div.make(220,150," / ");
   exit.make(350,400," EXIT ");
   ac.make(300,150," AC ");
   j=0;
   while(1)
	{
		setcolor(WHITE);
		while(!flag)//This while terminates when user is finished inputting a number
					//i.e. when he presses '+', '-', '*', '/'
		{
			for(i=0;i<10;i++)
			{
				if(b[i].click())
				{
					t.append(num[i]),j++,k=1;//display the number in textbox
					break;
				}
			}
			if(j==1&&k==1)
				t.write(""),t.append(num[i]);
			if(add.click())
				current='+',flag=1;
			else if(sub.click())
				current='-',flag=1;
			else if(equal.click())
				current='=',flag=1;
			else if(mul.click())
				current='*',flag=1;
			else if(div.click())
				current='/',flag=1;
			else if(exit.click())
				flag=2;// flag==2 indicates user wants to exit.
			else if(ac.click())
			{
				prev='1';
				t.write("");
			}
			k=0;
		}//End of second while loop
		//Now Calculate the result.
		if(flag==2)
			break;//flagg==2, go out of the main loop to exit.
		if(prev=='1')
			answer=atoi(t.text);
		else if(prev=='+')
			answer+=atoi(t.text);
		else if(prev=='-')
			answer-=atoi(t.text);
		else if(prev=='*')
			answer*=atoi(t.text);
		else if(prev=='/'&&(atoi(t.text))==0)
			msgbox("Cannot divide by zero"),prev='1',t.write("");
		else if(prev=='/')
			answer/=atoi(t.text);
		flag=0,j=0;
		prev=current;
		itoa(answer,ch,10);
		t.write(ch);
	}
	closegraph();
}
