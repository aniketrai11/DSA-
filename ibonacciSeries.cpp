#include<iostream>
using namespace std;
 
int main()
{
	int feb,n;
	cin>>n;
	int n1=0,n2=1,n3;
	for(int i=2;i<=n;i++)
	{
		n3=n1+n2;
		
		n1=n2;
		n2=n3;
		
	}
	cout<<n3;
}
