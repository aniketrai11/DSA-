#include <iostream>
#include <algorithm>
using namespace std;
 
// Recursive function to reverse a given string
// Note string is passed as a reference parameter
/*void reverse(string &str, int index,int k)
{
    
 
    // if the end of the string is reached
    if (k == str.length()) {
        return;
    }
    char temp=str[index];
    reverse(str, index+ 1,k+1);
 
    cout<<temp;
}*/
 
void reverse(string s)
{
	if(s.length()==0)
	return;
	
	string temp=s.substr(1);
	reverse(temp);
	cout<<s[0];
}
int main()
{
    string str;
    getline(cin,str);
 
    //reverse(str, 0,0);
   reverse(str);
 
    return 0;
}
