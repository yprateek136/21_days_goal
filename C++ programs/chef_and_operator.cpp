#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int A,B;
		cin>>A>>B;
		if(A>B)
		{
			cout<<">"<<endl;
		}
		else if(A<B)
		{
			cout<<"<"<<endl;
			
		}
		else
		cout<<"="<<endl;
		t--;
	}
	return 0;
	
}
