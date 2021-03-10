#include<iostream>
using namespace std;
int main()
{
	int array[3][2]={{0,1},{1,2},{3,4}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"enter element is ["<<i<<"]["<<j<<"] :";
			cout<<array[i][j]<<endl;
		}
	}
	return 0;
}
