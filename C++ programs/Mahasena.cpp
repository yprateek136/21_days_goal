#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,even=0,odd=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		if(even>odd)
		{
			cout<<"READY FOR BATTLE";
		}
		else
		{
			cout<<"NOT READY";
		}
	}
	return 0;
}
