#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//Declaration
		int a,b,bo=2,li=1,i=1,j=2;
			cin>>a>>b;
		while(li<=a && bo<=b)
		{
			i+=2;
			li+=i;
			j+=2;
			bo+=j;
		}
		if(li<a)
		{
			cout<<"Bob\n";
		}
		else
		{
			cout<<"Limak\n";
		}
	}
	return 0;
}
