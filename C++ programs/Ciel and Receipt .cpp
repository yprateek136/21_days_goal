#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,menu=0;
		cin>>p;
		while(p>=2048)
		{
			menu++;
			p-=2048;
		}
		
		while(p >= 1024)
		{
			menu++;
			p-=1024;
		}
		
		while(p >= 512)
		{
			menu++;
			p-=512;
		}
		
		while(p >= 256)
		{
			menu++;
			p-= 256;
		}
		
		while(p >= 128)
		{
			menu++;
			p-=128;
		}
		
		while(p >= 64)
		{
			menu++;
			p-=64;
		}
		
		while(p >= 32)
		{
			menu++;
			p-=32;
		}
		
		while(p >= 16)
		{
			menu++;
			p-=16;
		}
		
		while(p >= 8)
		{
			menu++;
			p-= 8;
		}
		
		while(p >= 4)
		{
			menu++;
			p-=4;
		}
		
		while(p >= 2)
		{
			menu++;
			p-=2;
		}
		
		while(p!=0)
		{
			menu++;
			p-=1;
		}
		cout<<menu<<endl;
	
	}
	return 0;
}
