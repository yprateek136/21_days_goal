#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,x,k,rem=0;
		cin>>N>>x>>k;
		rem=(N+1)%k;
		if((x%k==0) || (x%k==rem))
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
