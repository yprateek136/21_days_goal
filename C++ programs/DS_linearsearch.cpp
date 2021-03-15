#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Linearsearch( int a[] ,int n ,int x)
{
	for( int i=0;i<n;i++)
	{
		if(a[i] == x)
		return i;
	}
	return -1;
}
int main( void)
{
	int a[]={2,3,4,5,6};
	int x =2;
	int n = sizeof(a) / sizeof(a[0]);
    int result = Linearsearch( a , n, x);
	(result == -1)?cout<<"Element is not present in array"
				  :cout<<"Element is present at index ";
				  cout<< result;
	return 0;
}
