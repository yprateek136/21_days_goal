#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    // code here
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	        {
	            count++;
	        }
	        else
	            count=count+0;
	    }
	    return count;
	}
};
// Driver code
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
