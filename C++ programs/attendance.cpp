#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,i,j;
		cin>>N;
		string FirstName[N];
		string SecondName[N];
		for(i=0;i<N;i++)
		{
			cin>>FirstName[i]>>SecondName[i];
		}
		
    	for(i=0; i<N; i++)
        {
           bool flag=0;
            for(j=0;j<N;j++)
            {
                if(i!=j)
                {
                  if(FirstName[i]==FirstName[j])
                  flag=1;
                }
            }
            if(flag==0)
                cout<<FirstName[i]<<endl;
            else
             cout<<FirstName[i]<<" "<<SecondName[i]<<endl;
        }
	}
	return 0;
}
