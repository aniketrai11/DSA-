#include<iostream>
using namespace std;
int main()
{
	int mx=0,n;
	cout<<"Enter The size of Array";
	cin>>n;
	int a[n];
	cout<<"\nEnter The Elements of Array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(mx<a[i])
		mx=a[i];
		cout<< mx;
	}
		cout<<"\n"<<mx;
	
}
