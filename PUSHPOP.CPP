#include<iostream.h>
#include<conio.h>
int stack[4],n=4,top=-1,i,x;
void push(int val)
{
if(top>=n-1)
cout<<"stack overflow"<<endl;
else
{
top++;
stack[top]=val;
}
}
void pop()
{
if(top<=-1)
cout<<"stack underflow"<<endl;
else
{
cout<<"the popped element is"<<stack[top]<<endl;
top--;
}
}
void peep()
{
cout<<"enter the position of element u want to search:-";
cin>>i;
if(top-i+1<=0)
{
cout<<"\nstack underflow on peep";
return;
}
cout<<"the element is="<<stack[top-i+1];
}
void change()
{
cout<<"enter the position of the element u want to change:-";
cin>>i;
cout<<"enter the element";
cin>>x;
if(top-i+1<=0)
{
cout<<"\n stack is underflow";
return;
}
stack[top-i+1]=x;
}
void display()
{
if(top>=0)
{
cout<<"stack element are";
for(int i=top;i>=0;i--)
cout<<stack[i]<<" ";
cout<<endl;
}
else
cout<<"stack is empty";
}
void main()
{
clrscr();
int ch,val;
cout<<"1) Push"<<endl;
cout<<"2) Pop"<<endl;
cout<<"3) peep"<<endl;
cout<<"4) chnage"<<endl;
cout<<"5) Display stack"<<endl;
cout<<"6) Exit"<<endl;
do
{
cout<<"enter choice;"<<endl;
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"enter value to be pushed:"<<endl;
cin>>val;
push(val);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
peep();
break;
}
case 4:
{
change();
break;
}
case 5:
{
display();
break;
}
case 6:
{
cout<<"exit"<<endl;
break;
}
default:
{
cout<<"invalid choice"<<endl;
}
}
}while(ch!=6);
getch();
}
