#include<iostream>
using namespace std;
int main()
{
	int r;
	cin>>r;
	if(0<r && r<51)
	{
		cout<<"100"<<endl;
	}
	else if(50<r && r<101)
	{
		cout<<"50"<<endl;
	}
	else
		cout<<"0"<<endl;

	return 0;
}
