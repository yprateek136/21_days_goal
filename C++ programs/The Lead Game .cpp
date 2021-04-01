#include <iostream>
using namespace std;
int main(){
    int n,win,lead=0,a1=0,b1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        
        a1=a1+a;
        b1=b1+b;
        
        int temp,temp1;
        if(a1>b1)
        { 
			temp = a1-b1; 
			temp1=1;
		}
        else
        { 
			temp = b1-a1; 
			temp1=2;
		}
        if(lead<temp)
        {
			lead=temp;
			win=temp1;
        }
    }
    cout<<win<<" "<<lead;

    return 0;
}
