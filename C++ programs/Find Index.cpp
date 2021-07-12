#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
       /*********************** my code ****************************/
        vector<int> ans;
        int start= -1;
        int end= -1;
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == key)
            {
                start = i;
                break;
            }
        }
        
        for(int i = n-1; i > start; i--)
        {
            if(a[i] == key)
            {
                end = i;
                break;
            }
        }
        
        if(start > -1 && end == -1)
        {
            end = start;
        }
        
        ans.push_back(start);
        ans.push_back(end);
        return ans;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends
