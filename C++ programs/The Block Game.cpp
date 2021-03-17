#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,M=0;
		cin>>N;
		int temp=N;
		while(N>0)
		{
			int sum=N%10;
			N=N/10;
			M=M*10+sum;
		}
		if(temp==M)
		{
			cout<<"wins";	
		}
		else
		{
			cout<<"loses";
		}
	}
	return 0;
}
