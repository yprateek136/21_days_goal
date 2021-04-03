#include<iostream>
using namespace std;
int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{
		int sum=0,count=0;
		int n,k,i;
		cin>>n>>k;
		string s;
		cin>>s;
		for(i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				count+=1;
				if(count>=sum)
				{
					sum=count;
				}
			}
			
		}
		if(sum>=k)
			cout<<"yes";
		else
			cout<<"no";
	}
	return 0;
}
