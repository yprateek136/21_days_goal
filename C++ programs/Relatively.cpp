#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int g,c;
	    cin>>g>>c;
	    int height=0;
	    height=(c*c)/(2*g);
	    cout<<height<<"\n";
	}
	return 0;
}
