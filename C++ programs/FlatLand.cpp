#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		while(n>0)
		{
			//find squre root
			int x = sqrt(n);
			cout<<x<<endl;
			n=n-(x*x);
			count++;
		}
		cout<<count<<endl;
	}
}
