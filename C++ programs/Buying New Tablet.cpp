#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,b,w,h,p,result=0,fresult=0;
		cin>>n>>b;
		for(int i=0;i<n;i++)
		{
			cin>>w>>h>>p;
			if(p<=b)
			{
				if(w*h > fresult)
				{
				    result=w*h;
					fresult=result;
				}
			}
		}
		if(result !=0)
		{
		    cout<<fresult<<endl;
		}
		else
		{
		    cout<<"no tablet"<<endl;
		}
	}
	return 0;
}
