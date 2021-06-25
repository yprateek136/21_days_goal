#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,temp=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			arr[i]=i+1;
		}
		if(n%2==0)
		{
			for(int k=0;k<n;k++)
			{
				if((k%2)==0)
				{
				
					temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
			}
			for(int j=0;j<n;j++)
			{
				cout<<" "<<arr[j];
			}
		}
		else
		{
			for(int k=0;k<n-1;k++)
			{
				if((k%2)==0)
				{
				
					temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
			}
			for(int j=n-2;j<n-1;j++)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			for(int j=0;j<n;j++)
			{
				cout<<" "<<arr[j];
			}
		}
		
	}
	return 0;
}
