#include<iostream>
using namespace std;

void towerOfHonoi(int n,char src,char dest,char hlpr)
{
	if(n==0)
	return;
	
	towerOfHonoi(n-1,src,hlpr,dest);
	cout<<"move from"<<src<<"to"<<dest<<endl;
    towerOfHonoi(n-1,hlpr,dest,src);
    
}
 
 int main(){
 		towerOfHonoi(4,'A','B','C');
 	
 }
