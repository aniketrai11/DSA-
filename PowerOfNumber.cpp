#include<iostream>
using namespace std;

int pow(int n,int m)
{
	if (m==0)
	{
		return 1;
	}
	int ans=pow(n,m-1);
	return n*ans;

}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<pow(n,m);
}
