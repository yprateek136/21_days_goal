#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int count=0;
		cin>>s;
		int n=s.length();
		
		char char_array[n+1];
		strcpy(char_array, s.c_str());
		for(int i=0;i<n/2;i++)
		{
			for(int j=0;j<n/2;j++)
			if(char_array[i]==char_array[n-j-1])
			{
				count++;
			}
		}
		if(count==n/2)
		{
			cout<<"yes";
		}
		else
		{
			cout<<"no";
		}
	}
	return 0;
}
