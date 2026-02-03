#include<iostream.h>
#include<conio.h>
class employee
{
public:
float age;
float salary;
char name[10],post[20];
void getdata();
void putdata();
};
void employee::getdata()
{
cout<<"\n enter the name of employee:";
cin>>name;
cout<<"\n enter the age of employee:";
cin>>age;
cout<<"\n enter the post of employee:";
cin>>post;
cout<<"\n enter the salary of employee:";
cin>>salary;
}
void employee::putdata()
{
cout<<"name of employee="<<name<<endl;
cout<<"age of employee="<<age<<endl;
cout<<"post of employee="<<post<<endl;
cout<<"salary of employee="<<salary<<endl;
}
void main()
{
employee e;
clrscr();
e.getdata();
e.putdata();
getch();

 enter the name of employee:krishna                                             
                                                                                
 enter the age of employee:19                                                   
                                                                                
 enter the post of employee:director                                            
                                                                                
 enter the salary of employee:50000                                             
name of employee=krishna                                                        
age of employee=19                                                              
post of employee=director                                                       
salary of employee=50000                                                        
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
}