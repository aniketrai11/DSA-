#include<iostream>
using namespace std;

char removeDuplicate(string s,int n)
{
	int index=0;
	
	for(int i=0;i<n;i++)
	{ int j;
		for( j=0;j<i;j++)
		{
			if(s[i]==s[j])
			break;
		}
		if(j==i)
		s[index++]=s[i];
	}
	return s;
}

int main()
{
 string s;
 getline(cin,s);
 int n=s.length();
 cout<<removeDuplicate(s,n);	
}
