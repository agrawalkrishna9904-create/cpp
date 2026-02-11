#include<iostream.h>
#include<conio.h>
#include<alloc.h>
int x;
struct node
{
int info;
struct node *next;
}*list=NULL,*p,*q,*n;
void CREATE()
{
n=(struct node*)malloc(sizeof(struct node));
n->next=NULL;
p=n;
cout<<"\n Enter the info of node";
cin>>p->info;
p->next=NULL;
if(list==NULL)
{
list=p;
q=p;
}
else
{
q->next=p;
q=p;
}
}
void INSERT()
{
cout<<"\n Enter the element after which you want to insert?:";
cin>>x;
q=list;
while(q->info!=x)
if(q->next==NULL)
cout<<"\n Element not found";
else
q=q->next;
}
n=(struct node*)malloc(sizeof(struct node));
n->next=NULL;
p=n;
cout<<"\n Enter the info of new node";
cin>>p->info;
p->next=NULL;
if(q->next==NULL)
q->next=p;
else
{
p->next=q->next;
q->next=p;
}
}
void DELETE()
{
cout<<"\n Enter the element to be deleted:";
cin>>x;
q=list;
while(q->info!=x)
{
if(q->next==NULL)
cout<<"\n Element not found";
else
{
p=q;
q=q->next;
}
}
if(q==list)
list=q->next;
else if(q->next==NULL)
p->next=NULL;
else
p->next=q->next;
}
void SHOW()
{
cout<<"\n Linklist elements are:";
p=list;
While(p!=NULL)
{
cout<<"\n"<<p->info;
p=p->next;
}
}
void main()
{
int c;
clrscr();
do
{
cout<<"\n1.CREATE\n2.INSERT\n3.DELETE\n4.SHOW\n5.EXIT"<<endl;
cout<<"\n Enter your choice:";
cin>>c;
switch(c)
{
case 1: CREATE();
break;
case 2: INSERT();
break;
case 3: DELETE();
break;
case 4: SHOW();
break;
case 5://EXIT(0);
break;
}
}while(c!=5);
getch();
}            r
