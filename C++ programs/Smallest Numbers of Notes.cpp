#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[6]={1,2,5,10,50,100};
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=5 ;i>=0 &&  n!=0; i--)
		{
			if(n>=arr[i])
			{	
				count+=(n/arr[i]);
				n%=arr[i];
			}
		}
		cout<<count<<endl;
	}
}
