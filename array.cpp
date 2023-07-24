#include<iostream>
using namespace std;
int main()
{
	int a[50],size,pos,num;
	cout<<"enter the size of array:";
	cin>>size;
	cout<<"enter the elements in array \n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}

    //inserting a number in array
    cout<<"enter the position at which you want to enter the number in array";
    cin>>pos;
    cout<<"enter the number you want toenter";
    cin>>num;
    if(pos<=0||pos>size+1)
    {
    	cout<<"inbvalid";
    	
	}
	else{
	for(int i=size-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
			
		}
		a[pos-1]=num;
	cout<<"elements in array are \n";
	for(int i=0;i<size;i++)
	cout<<a[i];
		
	}
    return 0;
}
