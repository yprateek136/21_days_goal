#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2;
		cin>>n1>>n2;
		if(n1 > n2)
		{
			cout<<n1-n2;
		}
		else 
		{
			cout<<n1+n2;
		}
	}
	return 0;
}
