#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    int n,count=0;
	    int count1 = 0,count2=1;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        count1=0,count2=1;
	        for (int j = i; j < n; j++)
            {
                count1 += arr[j];
                count2 *= arr[j];
                if(count1==count2)
                {
                    count++;
                }
            }
	    }
	    cout << count << endl;
	}
	return 0;
}
