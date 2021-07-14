#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        int max=a[0],min=b[0];
        for(int i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        for(int i=0;i<m;i++)
        {
            if(min>b[i])
            {
                min=b[i];
            }
        }
        return min*max;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)    cin>>b[i];
        
        
        Solution ob;
        cout<<ob.find_multiplication(a, b, n, m)<<endl;

    }
    return 0;
}  // } Driver Code Ends
