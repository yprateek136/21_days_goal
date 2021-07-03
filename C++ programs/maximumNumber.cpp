#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int fm=0,sm=0,result=0;
	    fm=7*x;
	    sm=d*y+(7-d)*z;
	    result=max(fm , sm);
	    cout<<result<<"\n";
	}
	return 0;
}
