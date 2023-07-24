#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	cout<<"Enter elements";
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	int srt,i=0,end,sum,j=0;
	while(j<n && sum+a[j]<=s)
	{
		sum=sum+a[j];
		j++;
	}
	if(sum==s){
	cout<<i+1<<" "<<j;
	return 0;
}
	
	while(j<n)
	{
	  sum=sum+a[j];
	  while(sum>s)
	  {
	  	sum=sum-a[i];
	  	i++;
	  }	
	   
	   if(sum==s)
	   {
	   	srt=i+1;
	   	end=j+1;
	   	break;
	   }
	  j++; 
	}
	cout<<srt<<" "<<end;
}
