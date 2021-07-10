#include<bits/stdc++.h>
using namespace std;

class solution{
public:
	int leftElement(int a[], int n){
		sort(a, a+n);
		int mid=n/2;
		if(n%2==0)
		{
			return a[mid-1];
		}
		else{
			return a[mid];
		}
	}
};
//Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		solution ob;
		cout<<ob.leftElement(a,n)<<endl;
	}
}
