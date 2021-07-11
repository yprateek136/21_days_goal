#include<bits/stdc++.h>
using namespace std;

class solution{
public:
	bool IsPerfect(int a[],int n)
	{
		int arr[n];
		for(int i=n-1;i>=0;i--)
		{
			arr[n-i-1]=a[i];
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==a[i])
				count++;
		}
		if(n==count)
			return 1;
		else 
			return 0;
	}
};
// driver code

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
		solution ob;
		if(ob.IsPerfect(a,n))
			cout<<"PERFECT";
		else
			cout<<"NOT PERFECT";
	}
}
