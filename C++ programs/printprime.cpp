#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,i,j;
        cin>>n1>>n2;
        for(i=n1;i<=n2;i++)
        {
			int temp=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					temp+=1;
					break;
					
				}
			}
			if(temp==0)
			{
				cout<<i<<endl;
			} 
        }
    }
    return 0;
}
