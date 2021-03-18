#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int N,K;
		int temp=0;
		cin>>N>>K;
		for(int i=0; i<N;i++)
		{
			cin>>temp;
			if(temp <=K)
			{
				K=K-temp;
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
	}
	return 0;
}
