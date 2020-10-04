//any node deletion
//==================
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
 {
 int no;
 struct x *next;
 }*p,*q,*r,*s;
void main()
 {
 char ch;
 int target,flag=0;
 clrscr();
 p=q=(struct x *)malloc(sizeof(struct x));
 while(1)
  {
  printf("\nEnter any number :");
  scanf("%d",&p->no);
  printf("\n\nAny more(y/n)? ");
  fflush(stdin);
  ch=getche();
  if(ch=='y'||ch=='Y')
   {
   p->next=(struct x *)malloc(sizeof(struct x));
   p=p->next;
   }
  else
   {
   p->next=NULL;
   break;
   }
  }
 printf("\n Inputed numbers before deletion :\n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);

 printf("\nEnter the value of target node : ");
 scanf("%d",&target);
 if(q->no==target)
  {
  flag=1;
  r=q->next;
  printf("\nInformation of deleted node : %d",q->no);
  free(q);
  q=r;
  }
 else
 if(p->no==target)
  {
  for(r=q;r->next!=p;r=r->next);
  r->next=NULL;
  printf("\nInformation of deleted node : %d",p->no);
  free(p);
  p=r;
  flag=1;
  }
 else
  {
  for(r=q;r!=p;r=r->next)
   {
   if(r->next->no==target)
    {
    s=r->next;
    r->next=s->next;
    printf("\nInformation of deleted node : %d",s->no);
    free(s);
    flag=1;
    break;
    }
   }
  }
 if(flag==0)
 printf("\n\nTarget node not found...");
 else
  {
  printf("\n Inputed numbers after deletion :\n");
  for(r=q;r!=NULL;r=r->next)
  printf("%d\t",r->no);
  }
 getch();
 }