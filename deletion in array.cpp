#include<iostream>
using namespace std;
int main()
{
	int a[20],size,pos,num,i;
	cout<<"enter the size of array \n";
	cin>>size;
	cout<<"enter the elements of array \n";
	for(i=0;i<size;i++)
	{
	cin>>a[i];
    }
	cout<<"enter the position at which you want to delete the element \n";
	cin>>pos;
	for(i=pos-1;i<=size;i++)
       
    {
	  a[i]=a[i+1];
	  size--;
	  
	  
	  
    }
    cout<<"elements in array are \n";
	for(int i=0;i<size;i++)
	cout<<a[i];
		
	
    return 0;
	 
}
