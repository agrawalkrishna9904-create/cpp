#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class sample
{
public:
double*pval,*sval;int*qval,*rval;
void getdata()
{
pval=new double;
qval=new int;
sval=new double;
rval=new int;
cout<<"enter the pvalue"<<endl;
cin>>*pval;
cout<<"enter the svalue"<<endl;
cin>>*sval;
cout<<"enter the qvalue"<<endl;
cin>>*qval;
cout<<"enter the rvalue"<<endl;
cin>>*rval;
}
void putdata()
{
cout<<"the value of pval:"<<*pval<<endl;
cout<<"the value of sval:"<<*sval<<endl;
cout<<"the addition of pval&sval:"<<(*pval)+(*sval)<<endl;
delete pval;
delete sval;
cout<<"the value of qval:"<<*qval<<endl;
cout<<"the value of rval:"<<*rval<<endl;
cout<<"the addition of qval&rval:"<<(*qval)+(*rval)<<endl;
delete qval;
delete rval;
}
};
void main()
{
clrscr();
sample s;
s.getdata();
s.putdata();
getch();
}



enter the pvalue
10                                                                              
enter the svalue                                                                
30                                                                              
enter the qvalue                                                                
55                                                                              
enter the rvalue                                                                
70                                                                              
the value of pval:10                                                            
the value of sval:30                                                            
the addition of pval&sval:40                                                    
the value of qval:55                                                            
the value of rval:70                                                            
the addition of qval&rval:125                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
