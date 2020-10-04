//single link-list
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct x
{
  int no;
  struct x *next;
}*p,*q,*r;

void main()
{
  p=q=(struct x*)malloc(sizeof(struct x));
  char ch;
  clrscr();
  while(1)
  {
   printf("\nEnter any number :");
   scanf("%d",&p->no);
   printf("any more(y/n)? :");
   fflush(stdin);
   ch=getche();
   if(ch=='y'||ch=='Y')
   {
    p->next=(struct x*)malloc(sizeof(struct x));
    p=p->next;
   }
   else
   {
   p->next=NULL;
   break;
   }
  }
  printf("\n\nNodes information before insertin :\n");
  for(r=q;r!=NULL;r=r->next)
  printf("%d\t",r->no);

  r=(struct x*)malloc(sizeof(struct x));
  printf("\nEnter the value of new node:");
  scanf("%d",&r->no);

  r->next=q;
  q=r;

  printf("\n\nNodes information after information :\n");
  for(r=q;r!=NULL;r=r->next)
  printf("%d\t",r->no);
  getch();
  free(q);

}