#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	   int result=0;
	   for(int i=0; i<s.size()-1 ;i=i+2)
	   {
	       if((s[i]=='A' && s[i+1]=='B') || (s[i]=='B' && s[i+1]=='A'))
				result++;
	   }
	   if(result==s.size()/2)
			cout<<"yes"<<endl;
	   else
			cout<<"no"<<endl;
	}
	return 0;
}
