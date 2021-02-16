	#include <iostream>
	using namespace std;

	int main() 
	{
		// your code goes here
		int a,t,i,result;
		cout<<"Enter the number of testcases ";
		cin>>t;
		while(t--)
		{
			cout<<"enter the numbers\n";
			cin>>a;
			for(i=0;i<=a/2;i++)
			{
				result=i*i;
				if(result==	a)
				{
					cout<<"the root of the given number is "<<i;	
					cout<<"\n";
					break;
				}
				else if(result>a)
				{
					cout<<"the root of the given no is "<<i-1<<"\n";
					break;
				}
			}
		}
		return 0;
	}
