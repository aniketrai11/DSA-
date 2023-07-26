#include"bits/stdc++.h"
#include<stack>
#include<vector>


using namespace std;

vector<int> stockspan(vector<int> prices)
{
	vector<int> ans;
	stack<pair<int,int> > s;
	for(auto price:prices)
	{
		int days=1;
		while(!s.empty() && s.top()<=price){
			days+=s.top().second;
		}
		s.pop();
		s.push({price,days});
		ans.push_back(days);
	}
	return ans;
}


int main()
{
	vector<int> a=[];
	cout<<stockspan(a);
}
