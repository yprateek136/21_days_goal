#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		if(n==1)
		flag=1;
		
		else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
		cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;
	}
	return 0;
}
