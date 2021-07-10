#include<bits/stdc++.h>
using namespace std;
class solution{
public:
	void swapKth(int *arr ,int n ,int k)
	{
		for(int i=0;i<n;i++)
		{
			if(i==k-1)
			{
				i=k-1;
				swap(arr[i],arr[n-i-1]);
			}
		}
	}
};
//driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		solution ob;
		ob.swapKth(arr,n,k);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";	
	}
	return 0;
}
