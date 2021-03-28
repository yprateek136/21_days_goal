#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
		ll i;
        ll n,x;
        int s[50000];
        int r[50000];
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>r[i];
        }
        for(i = 1;i < n; ++i)
		{
			
			if(s[i]<=x)
			{
				if(r[0] < r[i])
				r[0] = r[i];
			}
		}
		cout<< r[0]<<endl;
    }
    return 0;
}

