#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	vector<int>valueEqualToIndex(int arr[],int n)
	{
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==i+1)
			{
				v.push_back(i+1);
			}
		}
		return v;
	}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		Solution ob;
		auto ans=ob.valueEqualToIndex(arr,n);
		if(ans.empty())
		{
			cout<<"not found";
		}
		else
		{
			for(int x:ans)
			{
				cout<< x <<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
