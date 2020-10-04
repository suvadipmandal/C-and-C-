#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
 {
 int no;
 struct x *next;
 }
 *p,*q,*r;
void main()
 {
 p=q=(struct x*)malloc(sizeof(struct x));
 char ch;
 clrscr();
 while(1)
  {
  printf("\nEnter any number :");
  scanf("%d",&p->no);
  printf("any more (y/n) ? ");
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
 printf("\n\nNodes information before insertion :\n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);

 while(1)
 {
 r=(struct x*)malloc(sizeof(struct x));
 printf("\nENter the value for new node :");
 scanf("%d",&r->no);

 p->next=r;
 r->next=NULL;
 p=r;

 printf("\n\nNodes information after insertion :\n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);

 printf("\n\nAny more insert now(y/n)? ");
 fflush(stdin);
 ch=getche();
 if(ch=='n'||ch=='N')
 break;
 }
 free(q);
 }