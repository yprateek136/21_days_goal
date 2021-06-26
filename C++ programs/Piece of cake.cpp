#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
			int count =0;
	        for(int j=0;j<s.size();j++)
	        {
				if(s[i]==s[j])
					count++;
	        }
			if(count==(s.size()-count))
			{
				cout<<"YES"<<endl;
				break;
			}
		   else if(i==(s.size()-1))
		   {
			cout<<"NO"<<endl;
		   }
		}
	}
	return 0;
}

