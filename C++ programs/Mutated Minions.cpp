#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,cnt=0;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(((arr[i]+k)%7)==0)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
