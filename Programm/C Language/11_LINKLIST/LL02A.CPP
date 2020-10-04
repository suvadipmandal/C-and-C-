//node insertion at the beginging of the list
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
 printf("\nNodes information befor e insertion :");
 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 display();
 ch='y';
 while(ch=='y'||ch=='Y')
 {
 s=(struct x*)malloc(sizeof(struct x));
 printf("\nEnter the value for new node :");
 scanf("%d",&s->no);
 s->next=q;
 q=s;
 printf("\Nodes information after insertion:\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 display();
 printf("\n\n\tAny more insertion(y/n)? :");
 fflush(stdin);
 ch=getche();
 }
}