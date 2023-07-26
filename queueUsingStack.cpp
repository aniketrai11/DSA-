#include<iostream>
#include<stack>
using namespace std;

class que{
	public:
	stack<int> s1;
	stack<int> s2;

public:
	
void push(int ele)
{
    s1.push(ele);
}

int pop()
{
	if(s1.empty() && s2.empty())
	{
		cout<<"Queue is empty";
		return -1;
	}
	
	if(s2.empty())
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
	}
		int val =s2.top();
		s2.pop();
		return val;	
}
};





int main()
{
	que q;
   q.push(1);
    q.push(2);
	 q.push(3);
	  q.push(4);
	   q.push(5);	
	   
	  
	  cout<< q.pop()<<"\n";
	  cout<< q.pop()<<"\n";
	  cout<< q.pop()<<"\n";
	  cout<< q.pop()<<"\n";
	  cout<< q.pop()<<"\n";
}
