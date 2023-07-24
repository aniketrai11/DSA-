#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//string s="sandwducwnc";
	string s="9746867";
	cout<<'f'-'a'<<endl;
	sort(s.begin(),s.end(),greater<int>());
	//transform(s.begin(),s.end(),s.begin(),::toupper);
	
	/*for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		s[i]=s[i]-32;
	}*/
	cout<<s;
}
