#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 long long int n;
 cin>>n;;
long long int res=0;
 while(n>0)
 {
     res=res*10+n%10;
     n/=10;
 }
 cout<<res<<endl;
}
}
