#include<iostream.h>
#include<conio.h>
class complex
{
int a,b,c;
public:
complex(){}
void getdata()
{
cout<<"enter two numbers:";
cin>>a>>b;
}
void operator++()
{
a=++a;
b=++b;
}
void operator--()
{
a=--a;
b=--b;
}
void display()
{
cout<<a<<"+\t"<<b<<"i";
}
};
void main()
{
clrscr();
complex obj;
obj.getdata();
++obj;
cout<<endl<<"increment complexx number";
obj.display();
--obj;
cout<<endl<<"decrement complex number";
obj.display();
getch();
}



enter two numbers:5 7
                                                                                
increment complexx number6+     8i                                              
decrement complex number5+      7i                                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
