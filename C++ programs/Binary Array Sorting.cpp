#include <bits/stdc++.h> 
using namespace std;
class Solution
{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        int j=0;
        for(int i=0;i<binArray.size();i++)
        {
            if(binArray[i]==0)
            {
                swap(binArray[i],binArray[j]);
                j++;
            }
        }
        return binArray;
    }
};
//  Driver Code

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>binArray(n);
	    for(int i = 0; i < n; i++)
	      cin>>binArray[i];
	    Solution ob;  
	  	vector<int> result = ob.SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
