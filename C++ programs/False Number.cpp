#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        
        if(s[0]=='1')
        { 
            s="10" + s.substr(1,s.size()-1);
        }
        else 
        {
            s="1"+ s; 
        }
        cout<<s<<endl;
    }
    return 0;
}




