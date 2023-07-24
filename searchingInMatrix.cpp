#include"bits/stdc++.h"
using namespace std;
int main()
{
	int n,m,target;
	cin>>n>>m;
		cout<<"target element\n";
	cin>>target;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	}
	
	bool found=false;
	int r=0;  
	int c=m-1;
	while(r<n && c>=0)
	{
		if(a[r][c]==target)
		found=true;
		
		else if(a[r][c]>target)
		c--;
		 
		else
		r++;
	}
	if(found)
	cout<<"\nelement found"<<endl;
	else
	cout<<"element not found";
}
