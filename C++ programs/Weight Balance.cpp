#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w1,w2,x1,x2,m,cwd=0,mpi1=0,mpi2=0;
		cin>>w1>>w2>>x1>>x2>>m;
		cwd=w2-w1;
		mpi1=x1*m;
		mpi2=x2*m;
		if(cwd>=mpi1 && cwd<=mpi2)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
	}
	return 0;
}
