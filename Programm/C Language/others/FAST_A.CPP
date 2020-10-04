#include<stdio.h>  //header file
#include<conio.h>  //header file
int main()        //main function no return vale
{                  //screen clear function
clrscr();
int a;             //define integer variable
printf("enter your number :"); //print or passing massage
scanf("%d",&a);                //scan the dacemal value using scanf function
printf("you enter:%d",a);
getch();                       //close the programm
return (0);
}