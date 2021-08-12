//Reverse array in groups 
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        for(int i=0;i<n;i+=k)
        {
            int left=i,right=min(n-1,i+k-1);
            while(left<=right)
            {
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
        }
    }
};

// Driver Code Starts.
int main() 
{
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 
        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}
