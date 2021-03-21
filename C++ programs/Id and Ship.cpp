#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char s;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		if(s == 'b' || s == 'B')
		cout<<"Battleship"<<endl;
		else if(s == 'c' || s == 'C')
		cout<<"Cruiser"<<endl;
		else if(s == 'd' || s == 'D')
		cout<<"Destroyer"<<endl;
		else if (s == 'f' || s == 'F')
		cout << "Frigate" <<endl;	
	}
	return 0;
}
