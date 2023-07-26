#include<iostream>
using namespace std;

int sum(int n)
{
	
	if(n==0)
	{
		return 0;
	}
	int prevsum=sum(n-1);
	prevsum=prevsum+n;
	return prevsum;
}
int main()
{
	int n;
	cin>>n;
	int m=sum(n);
	cout<<m;
	
}
