#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B,X,r1=0;
	    cin>>A>>B>>X;
	    r1=(B-A)/X;
	    cout<<r1<<endl;
	}
	return 0;
}
