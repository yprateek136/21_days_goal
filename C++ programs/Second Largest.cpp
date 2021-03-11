#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a>b&&b>c)||(c>b&b>a))
        cout<<b;
        else if((c>a&&a>b)||(b>a&&a>c))
        cout<<a;
        else
        cout<<c<<endl;
        cout<<endl;
    }
 
	return 0;
}
