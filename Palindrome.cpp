#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n+1];
	cin>>a;
	bool check=1;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			check=0;
            break;
		}
	}
	
	if(check==true)
	cout<<"Word is Palindrome";
	else
	cout<<"word is not palindorme";
	
}
/*#include <bits/stdc++.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: "; cin >> string1;
    
    length = strlen(string1);
    cout<<length;
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
}*/
