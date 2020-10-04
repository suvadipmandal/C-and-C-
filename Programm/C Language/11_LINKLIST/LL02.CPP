//node insertion at the beginging of the list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int no;
 struct node *next;
}*p,*q,*r,*s;
void display(void)
{
 printf("q->");
 for(r=q;r!=NULL;r=r->next)
 {
  textbackground(BLUE);
  cprintf("%4d",r->no);
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
  p=q=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter any number :");
  scanf("%d",&p->no);
  printf("\n\nAny more(y/n)? :");
  fflush(stdin);
  ch=getche();
  if(ch=='y'||ch=='Y')
  {
   p->next=(struct node*)malloc(sizeof(struct node));
   p=p->next;
  }
  else
  {
   p->next=NULL;
   break;
  }
 }
 printf("\nNodes informations befor insertion:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 display();
 s=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the value of new node :");
 scanf("%d",&s->no);
 s->next=q;
 q=s;
 printf("\nNodes informations after insertion:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 display();
 getch();
}