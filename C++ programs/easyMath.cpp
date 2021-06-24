#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];			
		}
		long long int product=0,digit=0,n1=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int sum=0;
				product=arr[i]*arr[j];
				while(product>0)
				{
					digit=product%10;
					sum+=digit;
					product/=10;
				}
				if(sum>n1)
				{
					n1=sum;
				}
			}
		}
		cout<<n1<<endl;
	}
	return 0;
}
