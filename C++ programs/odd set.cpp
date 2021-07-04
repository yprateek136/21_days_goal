#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int arr[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==1)
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"YES"<<"\n";
		}
		else
			cout<<"NO"<<"\n";
	}
	return 0;
}
