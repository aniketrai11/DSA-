#include<iostream>
using namespace std;

int kadane(int a[],int n)
{
	
	int maxsum=0;
	
	int curr=0;
	for(int i=0;i<n;i++)
	{
		curr=0;
		for(int j=i;j<n;j++)
		{
			curr=curr+a[j];
			maxsum=max(maxsum,curr);
		}
		
	}
	return maxsum;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int wrapsum;
	int nonwrapsum=kadane(a,n),totalsum=0;
	
	for(int i=0;i<n;i++){
		totalsum=totalsum+a[i];
		a[i]=-a[i];		
	}
	
	wrapsum=totalsum+kadane(a,n);
	cout<<max(wrapsum,nonwrapsum)<<endl;
	
}
