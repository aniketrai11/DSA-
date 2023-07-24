#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	cout<<"Enter elements";
	for(i=0;i<n;i++)
	  cin>>a[i];
	  
	const int N=1e6+2;
	int idx[N];
	for(i=0;i<N;i++)
	{
		idx[i]=-1;
	}
	int minidx= INT_MAX;
	for(i=0;i<n;i++)
	{
		
	  if(idx[a[i]]!=-1)
	  minidx=min(minidx,idx[a[i]]);
	  
	  else
	  idx[a[i]]=i;
	  
    }
    cout<<minidx+1;
}
