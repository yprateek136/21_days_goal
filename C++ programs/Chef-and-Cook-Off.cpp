#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        int ans=0,x;
        for(int i=0;i<5;i++)
        {
            cin>>x;
            ans+=x;
        }
        if(ans==0)
        {
            cout<<"Beginner"<<endl;
        }
        if(ans==1)
        {
            cout<<"Junior Developer"<<endl;
        }
        if(ans==2)
        {
            cout<<"Middle Developer"<<endl;
        }
        if(ans==3)
        {
            cout<<"Senior Developer"<<endl;
        }
        if(ans==4)
        {
            cout<<"Hacker"<<endl;
        }
        if(ans==5){
            cout<<"Jeff Dean"<<endl;
        }
    }
	return 0;
}
