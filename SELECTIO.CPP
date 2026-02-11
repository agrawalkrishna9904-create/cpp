#include<iostream.h>
#include<conio.h>
void swapping(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void display(int*array,int size)
{
for(int i=0; i<size;i++)
cout<<array[i]<<" ";
cout<<endl;
}
void selectionSort(int*array,int size)
{
int i,j,imin;
for(i=0;i<size-1;i++)
{
imin=i;
for(j=i+1;j<size;j++)
if(array[j]<array[imin])
imin=j;
swapping(array[i],array[imin]);
}
}
void main()
{
int n;
clrscr();
cout<<"Enter the munber of elements:";
cin>>n;
int arr[100];
cout<<"Enter elements:"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr [i];
}
cout<<"Array before Sorting:";
display(arr,n);
selectionSort(arr,n);
cout<<"Array after Sorting:";
display(arr,n);
getch();
}
Enter the munber of elements:5
Enter elements:                                                                 
99 88 12 09 04                                                                  
Array before Sorting:99 88 12 0 9                                               
Array after Sorting:0 9 12 88 99                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
