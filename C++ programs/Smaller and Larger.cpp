#include<bits/stdc++.h>
using namespace std;

class solution{
public:
	vector<int>getMoreAndLess(int arr[],int n,int x)
	{
		vector<int>result;
		int count=0,count1=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=x)
				count++;
			if(arr[i]<=x)
				count1++;
		}
		result.push_back(count1);
		result.push_back(count1);
		return result;
	}
};
//Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		solution ob;
		auto result=ob.getMoreAndLess(arr,n,x);
		cout<<result[0]<<" "<<result[1]<<"\n"; 
	}
	return 0;
}
