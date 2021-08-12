// Index of first 1 in a sorted array of 0s and 1s
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int firstIndex(int a[], int n) 
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                return i;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
			return -1;  
    }
};

// Driver Code Starts
int main() 
{

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
} 
