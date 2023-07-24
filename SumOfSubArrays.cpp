 #include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter The size of Array";
	cin>>n;
	int a[n];
	cout<<"\nEnter The Elements of Array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
    } 
	 int curr=0; 
	 for(int i=0;i<n;i++)
	 {
	 	int curr=0;
	 	for(int j=i;j<n;j++)
	 	{
	 		curr+=a[j];
	 		cout<<curr;
		}
	 }
	
}

