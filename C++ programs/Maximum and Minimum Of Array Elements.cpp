#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int max=arr[0],min=arr[0];
        for(int i = 0; i < n; i++)
        {
            if (arr[i] >= max)
            {
                max=arr[i];
            }
            else if(arr[i]<=min)
            {
                min=arr[i];
            }
        }
        cout <<max<<" "<<min<<endl;
    }
    return 0;
}
