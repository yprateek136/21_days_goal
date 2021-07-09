#include<iostream>
using namespace std;
class solution
{
	public:
	int findElementAtIndex(int a[],int n,int key)
	{
		//my code
		int result=0;
		for(int i=0;i<n;i++)
		{
			if(i==key)
			{
				result=a[i];
			}
		}
		return result;
	}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,key;
		cin>>n>>key;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		solution ob;
		cout<<ob.findElementAtIndex(a,n,key)<<endl;
	}
	return 0;
}
	
