	#include <iostream>
	using namespace std;

	int main() 
	{
		// your code goes here
		int a,t,j,i;
		cin>>t;
		for(j=0;j<t;j++)
		{
			cin>>a;
			for(i=0;i<=a/2;i++)
			{
				
				if(((i*i)<=a) && (a<((i+1)*(i+1))))
				{
					cout<<i<<endl;
					break;
				}
			}
		}
		return 0;
	}
