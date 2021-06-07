#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int X=0,Y=0,a,b,c,d;
		cin>>a>>b>>c>>d;
		X=c/a;
		Y=d/b;
		cout<<X+Y<<endl;
	}
	
	return 0;
}
