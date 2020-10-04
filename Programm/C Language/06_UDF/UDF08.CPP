//recursive function
#include<stdio.h>
#include<conio.h>
void print(void)
{
  static int i=1;
  printf("\nBhoot");
  printf("\nPetni");
  ++i;
  if(i<=5)
  print();
}
void main()
{
clrscr();
print();
getch();
}