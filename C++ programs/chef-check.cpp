#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,min=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        // maximum gap is always never greater than minimum number of among them
        sort(arr,arr+n);
        min=arr[0];
        cout<<min<<endl;
        }
    return 0;
}
