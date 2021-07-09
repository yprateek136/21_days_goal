#include<iostream>
using namespace std;

class solution
{
	public:
	string longest(string names[], int n)
	{
		//my code
		 int s1=0,s2=0;
        string result;
        for(int i=0;i<n;i++)
        {
			
            s1=names[i].length();
            if(s1>s2)
            {
				 s2=s1;
                result=names[i];
				cout<<s1<<endl;
            }
        }
        return result;
	}
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		for(int i=0;i<n;i++)
		{
			cin>>names[i];
		}
		solution ob;
		cout<<ob.longest(names,n)<<endl;
	}
	return 0;
}
	
