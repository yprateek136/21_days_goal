#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,result=0;
		cin>>n>>m;
		result=(n-1)*(m-1);
		cout<<result<<endl; 
	}
	return 0;
}
