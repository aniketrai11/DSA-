#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size";
	cin>>n;
	int a[n];
	cout<<"\nEnter the elements in array";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	for(int i=0;i<n;i++)
	{   
		for(int j=i;j<n;j++)
		{   
		    for(int k=i;k<=j;k++){
			cout<<" "<<a[k];
			
		}
		cout<<endl;
	}}
}
