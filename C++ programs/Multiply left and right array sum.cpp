#include<bits/stdc++.h>
using namespace std;

int multiply(int arr[] ,int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<multiply(a,n)<<endl;
	}
	return 0;
}

// function to multiply
int multiply(int arr[],int n)
{
	int lsum=0,rsum=0;
	for(int i=0;i<n;i++)
	{
		if(i>=0 && i<n/2)
		{
			lsum=lsum+arr[i];
		}
		else
		{
			rsum=rsum+arr[i];
		}
	}
	return rsum*lsum;
}
