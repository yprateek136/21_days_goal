#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		int count1=0,count2=0;
		cin>>s1>>s2;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?')
			{
				count1++;
			}
		}
		cout<<count1<<" ";
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i] || (s1[i]=='?'&& s2[i]=='?'))
			{
				count2++;
			}
		}
		cout<<count2<<endl;
	}
}
