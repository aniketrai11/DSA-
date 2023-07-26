#include<iostream>
#include<vector>
using namespace std;
 
 
int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<endl;
   
v.pop_back();

for(int i=0;i<v.size();i++)
cout<<v[i]<<endl;


vector<int>v2(3,50);

swap(v,v2);
for(int i=0;i<v.size();i++)
cout<<v[i]<<endl;
for(int i=0;i<v2.size();i++)
cout<<v2[i]<<endl;
   
   
   
     	
} 
