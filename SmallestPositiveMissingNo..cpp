#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	cout<<"Enter elements";
	for(int i=0;i<n;i++)
	  cin>>a[i];
	const int N =1e6+2;
    int check[N];
    for(i=0;i<n;i++)
     check[i]=false;
     
    for(i=0;i<n;i++)
    {
    	if(a[i]>=0)
    	{
    		check[a[i]]=true;
		}
	}
	int ans;
	for(i=0;i<N;i++)
	{
		if(check[i]==false){
			ans=i;
			break;
			
		}
	}
	cout<<ans;
	
}
