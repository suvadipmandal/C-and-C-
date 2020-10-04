//node deletion (last node)
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
{
int no;
struct x *next;
}*p,*q,*r,*s;
void display(void)
{
 printf("q->");
 for(r=q;r!=NULL;r=r->next)
 {
  textbackground(BLUE);
  cprintf("%4d ",r->no);
  textbackground(RED);
  cprintf("-");
  printf("->");
 }
 printf("NULL");
}
void main()
{
  char ch;
  clrscr();
  p=q=NULL;
  while(1)
  {
   if(q==NULL)
   p=q=(struct x*)malloc(sizeof(struct x));
   printf("\nEnter any number :");
   scanf("%d",&p->no);
   printf("\nAny more(y/n)? :");
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
  printf("\nNodes information before deletion");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  display();
  for(r=q;r->next!=p;r=r->next);
  printf("\n\nEnter the value of deleted node :%d",p->no);
  free(p);
  p=r;
  p->next=NULL;
  printf("\nNodes information agter deletion:");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  display();
  getch();
}