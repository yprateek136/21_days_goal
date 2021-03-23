#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<10 || n%2!=0)
        cout<<"1 "<<n<<endl;
        else if(n%2==0)
        cout<<2<<" "<<n/2<<endl;
    }
}
