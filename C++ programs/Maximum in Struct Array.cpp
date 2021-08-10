#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i].feet = tmp1;
	        arr[i].inches = tmp2;
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}

int findMax(Height arr[], int n)
{
    int res = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        res = max(res, arr[i].feet*12 + arr[i].inches);
    } 
    return res;  
}
/* Most of the times, in competitive programming,
there is a need to assign the variable, 
the maximum or minimum value that data type can hold, 
but remembering such a large and precise number comes out to be a difficult job. 
Therefore, C++ has certain macros to represent these numbers, 
so that these can be directly assigned to the variable without actually typing the whole number.
INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. 
INT_MIN specifies that an integer variable cannot store any value below this limit.
*/
