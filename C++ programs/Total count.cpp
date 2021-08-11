#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int totalCount(int arr[], int n, int k) 
    {
        int count=0;
        for(int i=0 ;i<n;i++)
        {
            if(arr[i]%k==0)
            {
                count=count + arr[i]/k;
            }
            else
            {
                
                count = count + (arr[i]/k + 1);
            }
        }
        return count;
    }
};
// Driver Code 
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
