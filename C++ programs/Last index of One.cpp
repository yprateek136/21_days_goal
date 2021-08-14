// Last index of One 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int lastIndex(string s) 
    {
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                return i;
                break;
            }
        }
        return -1;
    }

};
//Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
