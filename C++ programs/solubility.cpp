#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int X,A,B,result=0;
		cin>>X>>A>>B;
		result=(A+(100-X)*B)*10;
		cout<<result<<endl;
	}
	return 0;	
}
