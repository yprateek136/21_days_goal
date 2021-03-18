#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A,B;
		cin>>A>>B;
		if(A>B)
		{
			cout<<A<<" ";
		}
		else
		{
			cout<<B<<" ";
		}
		cout<<A+B<<endl;
	}
	return 0;

}
