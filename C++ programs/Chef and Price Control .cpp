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
		int a[1000000];
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
//		cout<<"sum="<<sum<<endl;
//		cout<<"bsum="<<bsum<<endl;
		result=sum-bsum;
		cout<<result;
	}
	return 0;
}
