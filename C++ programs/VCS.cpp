#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,i,count=0;
		cin>>n>>m>>k;
		int ig[n];
		int trac[n];
		for(i=0;i<m;i++)
		{
			cin>>ig[i];
		}
		for(i=0;i<k;i++)
		{
			cin>>trac[i];
		}
		for(int j=0;j<n;j++)
		{
			for(int l=0;l<n;l++)
			{
				if(ig[j]==trac[l])
				{
					count+=1;
				}
			}
		}
		cout<<count<<" "<<n-(m+k-count);
	}
	return 0;
}
