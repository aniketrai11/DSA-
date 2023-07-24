#include<iostream>
using namespace std;
//brute force method
/*int pairsum(int a[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<i<<" "<<j<<endl;
				return true;
			}
			
		}
	}
	return false;

}
*/
//linear method
int pairsum(int a[],int n,int k)
{
	int low=0;
	int high=n-1;
	
	while(low<high)
	{
		if(a[low]+a[high]==k)
		{
		  cout<<low<<" "<<high;
		  return true;
     	}
		else if(a[low]+a[high]>k)
		{
			high--;
		}
		else
		    low++;
	}
	return false;
}
int main(){
    int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter target sum";
	cin>>k;

	
   cout<<pairsum(a,n,k);
}
