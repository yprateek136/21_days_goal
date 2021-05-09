#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(long long x,unsigned int y,int p)
{
	int res=1;
	x=x%p;
	if(x == 0)
	{
		return 0;
	}
	while(y > 0)
	{
		if(y & 1)
		{
			res = (res*x)% p;
		}
		y = y>>1;
		x=(x*x)%p;
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long N,ans=0,p=1000000007;
		cin>>N;
		ans= power(2,N-1,p);
		cout<<ans<<endl;
	}
	return 0;
}
