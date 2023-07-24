#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int a[n+1];
	a[n]=-1;
	cout<<"\nenter the  elements in array";
	for(int i=0;i<n;i++)
	cin>>a[i];
	int ans=0;
	int mx=-1;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1] && a[i]>mx)
		{
		  ans++;	
		}
		mx=max(mx,a[i]);
	}
	cout<<ans;
	
}
