#include<iostream.h>
#include<conio.h>
class Addition
{
public:
void sum(int a,int b)
{
cout<<"\n Addition of two numbers\n"<<a+b<<endl;
}
void sum(int a,int b,int c)
{
cout<<"\n Addition of three numbers\n"<<a+b+c<<endl;
}
void sum(int a,int b, int c,int d)
{
cout<<"\n Addition of four numbers\n"<<a+b+c+d<<endl;
}
};
void main ()
{
clrscr();
Addition add;
add.sum(10,20);
add.sum(10,20,34);
add.sum(19,23,56,98);
getch();

 Addition of two numbers                                                        
30                                                                              
                                                                                
 Addition of three numbers                                                      
64                                                                              
                                                                                
 Addition of four numbers                                                       
196                                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
}