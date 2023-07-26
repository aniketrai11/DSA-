#include<iostream>
using namespace std;

bool sort(int a[],int n)
{
	if(n==1)
	{
		return true;
	}
	
	
	bool restarray=sort(a+1,n-1);
	return(a[0]<a[1] && restarray);
		
}
int main()
{
  int a[]={3,4,15,9,10};
  cout<<sort(a,5);
	
}
