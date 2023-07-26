#include<iostream>
using namespace std;

int stockSpan(int price[])
{
    int i, j;
	for( i=0;i<=7;i++)
	{
		int days=0;
		for( j=i;j>=0;j--)
		{
			if(price[i]>=price[j])
			days++;
			
			else
			break;
		}
		cout<<days;
	}
}

int main()
{
   int price[]={100,80,60,70,60,75,85};
   stockSpan( price);
}
