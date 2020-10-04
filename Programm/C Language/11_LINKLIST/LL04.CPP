//node insertion at any where of the list (before target)
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
  int inf,flag=0;
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
  printf("\nNodes information before insertion");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  display();
  printf("\nEnter the value of the target node :");
  scanf("%d",&inf);
  if(inf==q->no)
  {
   flag=1;
   s=(struct x*)malloc(sizeof(struct x));
   printf("\nEnter the value for new node :");
   scanf("%d",&s->no);
   s->next=q;
   q=s;
  }
  else
  {
  for(r=q;r!=p;r=r->next)
  {
   if(r->next->no==inf)
   {
   flag=1;
   s=(struct x*)malloc(sizeof(struct x));
   printf("\nenter the value for new node :");
   scanf("%d",&s->no);
   s->next=r->next;
   r->next=s;
   break;
   }
  }
 }
 if(flag==1)
 {
 printf("\nNodes information after insertion:");
 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 display();
 }
 else
 printf("\nTarget node not found......");
 getch();
}