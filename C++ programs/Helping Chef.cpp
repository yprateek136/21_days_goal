#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		if(n<10)
		{
			cout<<"Thanks for helping Chef!"<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		t--;
	}
	return 0;
}
