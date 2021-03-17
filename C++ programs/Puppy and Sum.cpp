#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll D,N;
		cin>>D>>N;
		ll sum=0;
		for(int i=0;i<D;i++)
		{
			sum = (N*(N+1))/2;
			N = sum;
		}
		cout<<sum<<endl;
	}
	return 0;
}
