#include<bits/stdc++.h>
using namespace std;

int main()
{
	int withdraw;
	float balance;
	cin>>withdraw;
	cin>>balance;
	
	if((withdraw%5==0)&&(balance>=(withdraw+0.50)))
	{
	    balance=balance-(withdraw+0.50);
	    cout << fixed << setprecision(2) << balance<<endl;
	}
	else
    	cout<<balance;
	return 0;
}
