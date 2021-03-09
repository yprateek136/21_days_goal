#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0,t;
	cout<<"number of testcase"<<endl;
	cin>>t;
	while(t>0)
	{
		cout<<"enter the a,b,c"<<endl;
		cin>>a>>b>>c;
		sum=a+b+c;
		if(sum==180)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
	return 0;
}
