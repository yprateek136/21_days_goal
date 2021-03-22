#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,M,K,d;
		cin>>N>>M>>K;
		d=max(N,M)-min(min(N,M)+K ,max(N,M));
		cout<<d;
	}
	return 0;
}
