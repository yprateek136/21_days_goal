#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,remainder=0,count=0;
		cin>>n;
		while(n>0)
		{	
			remainder=n%10;
			n=n/10;
			if(remainder==4)
			{
				count+=1;
			}
			
		}
		cout<<count<<endl;
	}
	return 0;
}
