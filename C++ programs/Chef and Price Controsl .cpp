#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0,result=0,bsum=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]>k)
			{
				bsum+=k;
			}
			else
			{
				bsum+=a[i];
			}
		}
		result=sum-bsum;
		cout<<result<<endl;
	}
	return 0;
}
