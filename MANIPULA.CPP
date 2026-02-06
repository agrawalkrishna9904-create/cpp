#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int roll_no;
float per;
char name[30];
clrscr();
cout<<endl<<"Enter the roll no:";
cin>>roll_no;
cout<<endl<<"Enter the name:";
cin>>name;
cout<<endl<<"Enter the percentage:";
cin>>per;
cout<<endl<<"roll no="<<setw(6)<<roll_no;
cout<<endl<<"name="<<setw(12)<<setfill('#')<<name;
cout<<endl<<"percentage="<<setw(5)<<setprecision(4)<<per;
getch();
}




Enter the roll no:635                                                           
                                                                                
Enter the name:krishna                                                          
                                                                                
Enter the percentage:75                                                         
                                                                                
roll no=   635                                                                  
name=#####krishna                                                               
percentage=###75                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
