#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,min=100000;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		cout<<min*(n-1)<<endl;
	}
}
