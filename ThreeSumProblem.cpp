#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int target;
	cin>>target;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int size = sizeof(arr) / sizeof(arr[0]);
	bool found=false;
    sort(arr, arr + size);
	for(int i=0;i<n;i++)
	{
		int low=i+1,hi=n-1;
		while(low<hi){
		
		int current=arr[i]+arr[low]+arr[hi];
		if(current==target)
		found=true;
		if(current<target)
		low++;
		else
		hi++;
	}
	}
	if(found==true)
	cout<<"true";
	else
	cout<<"false";
}

