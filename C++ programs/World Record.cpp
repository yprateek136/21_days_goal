#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ 
	    
	    float k1,k2,k3,v,score,change=0,change1=0,last=0;
		cin>>k1>>k2>>k3>>v;
		double result=k1*k2*k3*v;
		std::cout << std::fixed;
		std::cout << std::setprecision(3);
		result=100/result;
		change=result*1000;
		change1=fmodf(change,10);
		if(change1>5)
		{
			last=change+(10-change1);
			score=(last/1000)*100;
		}
		else
		{
			last=change-change1;
			score=(last/1000)*100;
		}
		if(score<958)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
