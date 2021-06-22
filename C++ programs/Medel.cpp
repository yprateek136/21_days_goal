#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,min=0,max=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
		}
		min=max=arr[0];
		for(int i=0;i<n;i++)
		{
	       
	       if(min>arr[i])
	        {
	            min=arr[i];
	        }
	        if(max<arr[i])
	        {
	            max=arr[i];
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
			if(min==arr[j])
			{
				cout<<arr[j]<<" ";
			}
			if(max==arr[j])
			{
				cout<<arr[j]<<" ";
			}
		}
	    cout<<endl;
	}
	return 0;
}
