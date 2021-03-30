#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int	n;
		cin>>n;
		string s;
		cin>>s;
		int a[26]={0};
		for(int i=0;i<n;i++)
		{
			if (s[i]>='a' && s[i]<='z')
			a[s[i]-'a']++;
		}
		bool flag=true;
		for(int i=0;i<26;i++)
		{
			if(a[i]%2==1)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<endl;
	}
	return 0;
}
