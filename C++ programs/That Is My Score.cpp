#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,s,n,sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>p>>s;
			if(p==1 || p==2 || p==3 || p==4 || p==5 ||p==6 || p==7 || p==8)
			{
				sum+=s;
			}
			else
			{
				sum+=0;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
