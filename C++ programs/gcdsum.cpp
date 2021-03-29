#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int sum(ll x)
{
    int s=0,sum=0;
    while(x!=0)
    {
        s=x%10;
        sum = sum+s;
        x=x/10;
    }
    return sum;
}
 
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
		ll x;
		cin>>x;
		ll a,ans=1;
		while(ans<=1)
		{
			a=sum(x);
			ans=__gcd(x,a);
			if(ans<=1)
			{
				x++;
			}
			else break;
 
		}
		cout<<x<<endl;
    }
    return 0;
}
	
