// Convert array into Zig-Zag fashion 
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:	
	void zigZag(int arr[], int n) 
	{
	    int temp=0;
	    for(int i = 0; i < n-1; i++)
        {
            if(i%2 == 0)
            {
                if(arr[i] > arr[i+1])
                {
                    //swap(arr[i], arr[i+1]);
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            else
            {
                if(arr[i] < arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
	}
};
// Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
