#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,remainder,sum;
		cin>>n;
		if(n==1)
			cout<<"20";
		else if(n==2)
			cout<<"36";
		else if(n==3)
			cout<<"51";
		else if(n==4)
			cout<<"60";
		else
		{
		    remainder=n%4;
		    sum=((n-remainder)/4)*44;
	        if(remainder==0)
	            sum+=16;
	        else if(remainder==1)
	            sum+=32;
	        else if(remainder==2)
	            sum+=44;
	        else if(remainder==3)
	            sum+=55;
			cout<<sum<<endl;
		}
		
	}
	return 0;
}
